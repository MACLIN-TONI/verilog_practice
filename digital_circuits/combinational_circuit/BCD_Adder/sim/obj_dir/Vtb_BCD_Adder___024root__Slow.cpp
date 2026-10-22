// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_BCD_Adder.h for the primary calling header

#include "Vtb_BCD_Adder__pch.h"
#include "Vtb_BCD_Adder__Syms.h"
#include "Vtb_BCD_Adder___024root.h"

void Vtb_BCD_Adder___024root___ctor_var_reset(Vtb_BCD_Adder___024root* vlSelf);

Vtb_BCD_Adder___024root::Vtb_BCD_Adder___024root(Vtb_BCD_Adder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_BCD_Adder___024root___ctor_var_reset(this);
}

void Vtb_BCD_Adder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_BCD_Adder___024root::~Vtb_BCD_Adder___024root() {
}
