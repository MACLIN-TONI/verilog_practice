// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_BCD_Adder.h for the primary calling header

#ifndef VERILATED_VTB_BCD_ADDER___024ROOT_H_
#define VERILATED_VTB_BCD_ADDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_BCD_Adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_BCD_Adder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_BCD_Adder__DOT__a;
    CData/*3:0*/ tb_BCD_Adder__DOT__b;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__c_out1;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__invalid;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__1__KET____DOT__dut__DOT__sum1;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__2__KET____DOT__dut__DOT__sum1;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__3__KET____DOT__dut__DOT__sum1;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b;
    CData/*0:0*/ tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_BCD_Adder__DOT__PASS;
    IData/*31:0*/ tb_BCD_Adder__DOT__FAIL;
    IData/*31:0*/ tb_BCD_Adder__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_BCD_Adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_BCD_Adder___024root(Vtb_BCD_Adder__Syms* symsp, const char* v__name);
    ~Vtb_BCD_Adder___024root();
    VL_UNCOPYABLE(Vtb_BCD_Adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
