// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_BCD_Adder.h for the primary calling header

#include "Vtb_BCD_Adder__pch.h"
#include "Vtb_BCD_Adder___024root.h"

VL_ATTR_COLD void Vtb_BCD_Adder___024root___eval_initial__TOP(Vtb_BCD_Adder___024root* vlSelf);
VlCoroutine Vtb_BCD_Adder___024root___eval_initial__TOP__Vtiming__0(Vtb_BCD_Adder___024root* vlSelf);

void Vtb_BCD_Adder___024root___eval_initial(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___eval_initial\n"); );
    // Body
    Vtb_BCD_Adder___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_BCD_Adder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_BCD_Adder___024root___eval_initial__TOP__Vtiming__0(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0;
    CData/*3:0*/ __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0;
    CData/*4:0*/ __Vtask_tb_BCD_Adder__DOT__check__0__exp;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0;
    // Body
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = 0U;
    vlSelf->tb_BCD_Adder__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 0U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 1U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 2U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 3U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 4U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 5U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 6U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 7U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 8U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 0U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 1U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 2U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 3U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 4U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 5U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 6U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 7U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__exp = 8U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_b = 9U;
    __Vtask_tb_BCD_Adder__DOT__check__0__t_a = 9U;
    vlSelf->tb_BCD_Adder__DOT__a = __Vtask_tb_BCD_Adder__DOT__check__0__t_a;
    vlSelf->tb_BCD_Adder__DOT__b = __Vtask_tb_BCD_Adder__DOT__check__0__t_b;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp) 
         == ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
              << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                         << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                      ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                    << 2U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))))) {
        VL_WRITEF("PASS | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__PASS = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__PASS);
    } else {
        VL_WRITEF("FAIL | a = %2# | b = %2# | out = %b (%2#) | exp = %b (%2#)\n",
                  4,vlSelf->tb_BCD_Adder__DOT__a,4,
                  (IData)(vlSelf->tb_BCD_Adder__DOT__b),
                  5,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                       | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                          & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))) 
                      << 4U) | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                 << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                              ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b))))),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))),
                  5,(IData)(__Vtask_tb_BCD_Adder__DOT__check__0__exp),
                  4,(0xfU & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                             + (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        vlSelf->tb_BCD_Adder__DOT__FAIL = ((IData)(1U) 
                                           + vlSelf->tb_BCD_Adder__DOT__FAIL);
    }
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb/tb_BCD_Adder.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
