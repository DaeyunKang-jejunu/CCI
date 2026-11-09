// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_CCI_AC_RANGE_GEN__SYMS_H_
#define VERILATED_VTB_CCI_AC_RANGE_GEN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_cci_ac_range_gen.h"

// INCLUDE MODULE CLASSES
#include "Vtb_cci_ac_range_gen___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_ac_range_gen__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_cci_ac_range_gen* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_cci_ac_range_gen___024root TOP;

    // CONSTRUCTORS
    Vtb_cci_ac_range_gen__Syms(VerilatedContext* contextp, const char* namep, Vtb_cci_ac_range_gen* modelp);
    ~Vtb_cci_ac_range_gen__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
