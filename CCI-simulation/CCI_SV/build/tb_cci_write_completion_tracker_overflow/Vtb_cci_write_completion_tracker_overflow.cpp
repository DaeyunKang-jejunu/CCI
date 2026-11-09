// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_cci_write_completion_tracker_overflow__pch.h"

//============================================================
// Constructors

Vtb_cci_write_completion_tracker_overflow::Vtb_cci_write_completion_tracker_overflow(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_cci_write_completion_tracker_overflow__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_cci_write_completion_tracker_overflow::Vtb_cci_write_completion_tracker_overflow(const char* _vcname__)
    : Vtb_cci_write_completion_tracker_overflow(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_cci_write_completion_tracker_overflow::~Vtb_cci_write_completion_tracker_overflow() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_cci_write_completion_tracker_overflow___024root___eval_debug_assertions(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_cci_write_completion_tracker_overflow___024root___eval_static(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);
void Vtb_cci_write_completion_tracker_overflow___024root___eval_initial(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);
void Vtb_cci_write_completion_tracker_overflow___024root___eval_settle(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);
void Vtb_cci_write_completion_tracker_overflow___024root___eval(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);

void Vtb_cci_write_completion_tracker_overflow::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_cci_write_completion_tracker_overflow::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_cci_write_completion_tracker_overflow___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_cci_write_completion_tracker_overflow___024root___eval_static(&(vlSymsp->TOP));
        Vtb_cci_write_completion_tracker_overflow___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_cci_write_completion_tracker_overflow___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_cci_write_completion_tracker_overflow___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_cci_write_completion_tracker_overflow::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_cci_write_completion_tracker_overflow::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_cci_write_completion_tracker_overflow::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_cci_write_completion_tracker_overflow___024root___eval_final(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow::final() {
    contextp()->executingFinal(true);
    Vtb_cci_write_completion_tracker_overflow___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_cci_write_completion_tracker_overflow::hierName() const { return vlSymsp->name(); }
const char* Vtb_cci_write_completion_tracker_overflow::modelName() const { return "Vtb_cci_write_completion_tracker_overflow"; }
unsigned Vtb_cci_write_completion_tracker_overflow::threads() const { return 1; }
void Vtb_cci_write_completion_tracker_overflow::prepareClone() const { contextp()->prepareClone(); }
void Vtb_cci_write_completion_tracker_overflow::atClone() const {
    contextp()->threadPoolpOnClone();
}
