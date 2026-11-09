// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_existing_system.h for the primary calling header

#include "Vtb_cci_existing_system__pch.h"

void Vtb_cci_existing_system___024root___ctor_var_reset(Vtb_cci_existing_system___024root* vlSelf);

Vtb_cci_existing_system___024root::Vtb_cci_existing_system___024root(Vtb_cci_existing_system__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_cci_existing_system___024root___ctor_var_reset(this);
}

void Vtb_cci_existing_system___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_cci_existing_system___024root::~Vtb_cci_existing_system___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
