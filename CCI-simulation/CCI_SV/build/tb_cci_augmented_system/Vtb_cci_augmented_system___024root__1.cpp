// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_augmented_system.h for the primary calling header

#include "Vtb_cci_augmented_system__pch.h"

void Vtb_cci_augmented_system___024root___nba_comb__TOP__0(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___nba_comb__TOP__0\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei;
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__177__base_addr;
    __Vfunc_cci_page_relative_mask__177__base_addr = 0;
    CData/*6:0*/ __Vfunc_cci_page_relative_mask__177__line_count;
    __Vfunc_cci_page_relative_mask__177__line_count = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__177__explicit_mask;
    __Vfunc_cci_page_relative_mask__177__explicit_mask = 0;
    // Body
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_valid) 
           & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)));
    __Vfunc_cci_page_relative_mask__177__explicit_mask 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask;
    __Vfunc_cci_page_relative_mask__177__line_count 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_line_count;
    __Vfunc_cci_page_relative_mask__177__base_addr 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
    {
        vlSelf->__Vfunc_cci_page_relative_mask__177__Vfuncout = 0;
        if ((0ULL != __Vfunc_cci_page_relative_mask__177__explicit_mask)) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout 
                = __Vfunc_cci_page_relative_mask__177__explicit_mask;
            goto __Vlabel0;
        }
        if ((0U != (0x0000003fU & (IData)(__Vfunc_cci_page_relative_mask__177__base_addr)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count 
            = __Vfunc_cci_page_relative_mask__177__line_count;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__base_addr 
            = __Vfunc_cci_page_relative_mask__177__base_addr;
        vlSelf->__Vfunc_cci_range_fits_page__178__Vfuncout = 0;
        vlSelf->__Vfunc_cci_range_fits_page__178__end_line = 0;
        vlSelfRef.__Vfunc_cci_line_idx__179__addr = vlSelfRef.__Vfunc_cci_range_fits_page__178__base_addr;
        vlSelf->__Vfunc_cci_line_idx__179__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__179__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__179__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_0__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__179__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__end_line 
            = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_0__cci_line_idx) 
                              + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count)));
        vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count 
            = vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count;
        vlSelf->__Vfunc_cci_valid_line_count__180__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_valid_line_count__180__Vfuncout 
            = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count)) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count)));
        vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_1__cci_valid_line_count 
            = vlSelfRef.__Vfunc_cci_valid_line_count__180__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_1__cci_valid_line_count) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178__end_line)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_0__cci_range_fits_page 
            = vlSelfRef.__Vfunc_cci_range_fits_page__178__Vfuncout;
        if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_0__cci_range_fits_page)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count 
            = __Vfunc_cci_page_relative_mask__177__line_count;
        {
            vlSelf->__Vfunc_cci_contiguous_mask__181__Vfuncout = 0;
            if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0xffffffffffffffffULL;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout 
                = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count)) 
                   - 1ULL);
            __Vlabel1: ;
        }
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_1__cci_contiguous_mask 
            = vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout;
        vlSelfRef.__Vfunc_cci_line_idx__182__addr = __Vfunc_cci_page_relative_mask__177__base_addr;
        vlSelf->__Vfunc_cci_line_idx__182__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__182__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__182__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_2__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__182__Vfuncout;
        vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout 
            = (vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_1__cci_contiguous_mask 
               << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_2__cci_line_idx));
        __Vlabel0: ;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask 
        = vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[0U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[1U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[2U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[3U] = 0ULL;
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0U;
    if ((1U & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0x800000000000001fULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                  << 0x0000000bU));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 1U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000020ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 2U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000040ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 3U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000060ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 4U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000080ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 5U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 6U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 7U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 8U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000100ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 9U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000120ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000140ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000160ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000180ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x10U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000200ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x11U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000220ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x12U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000240ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x13U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000260ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x14U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000280ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x15U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x16U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x17U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x18U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000300ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x19U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000320ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000340ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000360ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000380ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x20U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000400ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x21U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000420ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x22U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000440ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x23U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000460ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x24U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000480ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x25U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x26U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x27U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x28U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000500ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x29U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000520ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000540ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000560ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000580ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x30U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000600ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x31U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000620ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x32U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000640ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x33U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000660ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x34U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000680ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x35U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x36U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x37U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x38U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000700ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x39U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000720ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000740ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000760ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000780ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_valid) 
           & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)));
    vlSelfRef.tb_cci_augmented_system__DOT__req_error 
        = ((0ULL == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid));
}

void Vtb_cci_augmented_system___024root___nba_comb__TOP__1(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___nba_comb__TOP__1\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount;
    QData/*63:0*/ __Vfunc_cci_popcount__173__m;
    __Vfunc_cci_popcount__173__m = 0;
    IData/*31:0*/ __Vfunc_cci_popcount__173__cnt;
    __Vfunc_cci_popcount__173__cnt = 0;
    // Body
    vlSelfRef.tb_cci_augmented_system__DOT__memcpy_probe_hazard 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
           & ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id) 
                                   != (0x0000000fU 
                                       & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U])) 
                                  & (((0x000fffffffffffffULL 
                                       & (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])) 
                                           << 0x0000001cU) 
                                          | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                                             >> 4U))) 
                                      == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                          >> 0x0000000cU)) 
                                     & ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                            [(((IData)(4U) 
                                               + (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                             >> 6U)))) 
                                              >> 5U)] 
                                            >> (0x0000001fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                               >> 6U))))))) 
                                        & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                           [(((IData)(0x00000044U) 
                                              + (0x0000003fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                            >> 6U)))) 
                                             >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000044U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                              >> 6U)))))))))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]
        [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_type 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]
        [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0eU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | (((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                 & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                            >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]))) 
               & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                            >> 5U)) 
                  == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                      >> 6U))) & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0dU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 1U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0bU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 2U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((7U & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 3U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
               [vlSelfRef.tb_cci_augmented_system__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
              [vlSelfRef.tb_cci_augmented_system__DOT__bid]
              [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
              [vlSelfRef.tb_cci_augmented_system__DOT__bid]]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__is_last))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid));
    __Vfunc_cci_popcount__173__m = vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask;
    __Vfunc_cci_popcount__173__cnt = 0U;
    if ((1U & (IData)(__Vfunc_cci_popcount__173__m))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 1U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 2U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 3U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 4U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 5U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 6U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 7U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 8U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 9U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x10U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x11U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x12U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x13U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x14U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x15U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x16U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x17U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x18U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x19U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x20U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x21U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x22U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x23U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x24U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x25U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x26U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x27U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x28U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x29U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x30U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x31U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x32U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x33U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x34U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x35U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x36U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x37U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x38U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x39U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount 
        = __Vfunc_cci_popcount__173__cnt;
    vlSelfRef.tb_cci_augmented_system__DOT__normal_req_error 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid) 
            & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid))) 
           & ((0ULL == vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask) 
              | VL_LTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_error)) 
                                   & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid)));
    vlSelfRef.tb_cci_augmented_system__DOT__req_ready 
        = (1U & ((1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type))
                  ? ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                         >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_error))
                  : ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid)) 
                     & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr 
        = ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__current_page 
            << 6U) | (QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx)));
    vlSelfRef.tb_cci_augmented_system__DOT__probe_hazard 
        = ((0U != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
              & ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                  >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id) 
                                      != (0x0000000fU 
                                          & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U])) 
                                     & (((0x000fffffffffffffULL 
                                          & (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])) 
                                              << 0x0000001cU) 
                                             | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                                                >> 4U))) 
                                         == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                             >> 0x0000000cU)) 
                                        & ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                               [(((IData)(4U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                              >> 6U)))) 
                                                 >> 5U)] 
                                               >> (0x0000001fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                                  >> 6U))))))) 
                                           & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                              [(((IData)(0x00000044U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                             >> 6U)))) 
                                                >> 5U)] 
                                              >> (0x0000001fU 
                                                  & ((IData)(0x00000044U) 
                                                     + 
                                                     (0x0000003fU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                                 >> 6U))))))))))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_wr_done_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid) 
           & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_type)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_line_mask_w 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req)
            ? vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask
            : (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U])) 
                                      >> 4U))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 0U;
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__snoop_done 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
           & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r) 
               | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                  & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw))) 
              & ((~ ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r) 
                     | ((0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next)) 
                        | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                           & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) 
                              & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_resp) 
                                 >> 1U)))))) & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next) 
                                                == 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) 
                                                     & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r))))))));
}

void Vtb_cci_augmented_system___024root___nba_sequent__TOP__0(Vtb_cci_augmented_system___024root* vlSelf);
void Vtb_cci_augmented_system___024root___nba_sequent__TOP__1(Vtb_cci_augmented_system___024root* vlSelf);

void Vtb_cci_augmented_system___024root___eval_nba(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_nba\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_augmented_system___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_augmented_system___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_augmented_system___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_augmented_system___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_cci_augmented_system___024root___timing_ready(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___timing_ready\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hbde63173__0.ready("@(posedge tb_cci_augmented_system.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready("@(negedge tb_cci_augmented_system.clk)");
    }
}

void Vtb_cci_augmented_system___024root___timing_resume(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___timing_resume\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hbde63173__0.moveToResumeQueue(
                                                          "@(posedge tb_cci_augmented_system.clk)");
    vlSelfRef.__VtrigSched_hbde63e1f__0.moveToResumeQueue(
                                                          "@(negedge tb_cci_augmented_system.clk)");
    vlSelfRef.__VtrigSched_hbde63173__0.resume("@(posedge tb_cci_augmented_system.clk)");
    vlSelfRef.__VtrigSched_hbde63e1f__0.resume("@(negedge tb_cci_augmented_system.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_augmented_system___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_cci_augmented_system___024root___eval_triggers_vec__act(Vtb_cci_augmented_system___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_augmented_system___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_cci_augmented_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_cci_augmented_system___024root___eval_act(Vtb_cci_augmented_system___024root* vlSelf);

bool Vtb_cci_augmented_system___024root___eval_phase__act(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_phase__act\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_augmented_system___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_augmented_system___024root___timing_ready(vlSelf);
    Vtb_cci_augmented_system___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_augmented_system___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_augmented_system___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_augmented_system___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_augmented_system___024root___timing_resume(vlSelf);
        Vtb_cci_augmented_system___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_augmented_system___024root___eval_phase__inact(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_phase__inact\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 29, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_augmented_system___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_augmented_system___024root___eval_phase__nba(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_phase__nba\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_augmented_system___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_augmented_system___024root___eval_nba(vlSelf);
        Vtb_cci_augmented_system___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_augmented_system___024root___sample(Vtb_cci_augmented_system___024root* vlSelf);

void Vtb_cci_augmented_system___024root___eval(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vtb_cci_augmented_system___024root___sample(vlSelf);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_augmented_system___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 29, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 29, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_augmented_system___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 29, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_augmented_system___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_augmented_system___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_augmented_system___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(Vtb_cci_augmented_system___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0 
        = vlSelfRef.tb_cci_augmented_system__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(Vtb_cci_augmented_system___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0 
        = vlSelfRef.tb_cci_augmented_system__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63173__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbde63e1f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_augmented_system___024root___sample(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___sample\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__overflow_sticky 
        = vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky;
    vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__underflow_sticky 
        = vlSelfRef.tb_cci_augmented_system__DOT__underflow_sticky;
    vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth;
    vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__rst_n 
        = vlSelfRef.tb_cci_augmented_system__DOT__rst_n;
}

#ifdef VL_DEBUG
void Vtb_cci_augmented_system___024root___eval_debug_assertions(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_debug_assertions\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
