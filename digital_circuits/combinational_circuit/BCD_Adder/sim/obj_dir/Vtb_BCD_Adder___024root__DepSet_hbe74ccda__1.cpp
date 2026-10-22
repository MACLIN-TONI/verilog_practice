// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_BCD_Adder.h for the primary calling header

#include "Vtb_BCD_Adder__pch.h"
#include "Vtb_BCD_Adder___024root.h"

VL_INLINE_OPT void Vtb_BCD_Adder___024root___act_sequent__TOP__0(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__0__KET____DOT__dut__b 
        = (1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                 ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b)));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__3__KET____DOT__dut__DOT__sum1 
        = (1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                 >> 3U));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__2__KET____DOT__dut__DOT__sum1 
        = (1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                 >> 2U));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin 
        = (1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                 & (IData)(vlSelf->tb_BCD_Adder__DOT__b)));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__1__KET____DOT__dut__DOT__sum1 
        = (1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                  ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                 >> 1U));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b 
        = ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__1__KET____DOT__dut__DOT__sum1) 
           ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin 
        = (1U & ((((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                   & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                  >> 1U) | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__1__KET____DOT__dut__DOT__sum1) 
                            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin))));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b 
        = ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__2__KET____DOT__dut__DOT__sum1) 
           ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin 
        = (1U & ((((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                   & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                  >> 2U) | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__2__KET____DOT__dut__DOT__sum1) 
                            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin))));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0 
        = ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__3__KET____DOT__dut__DOT__sum1) 
           ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1 = (1U 
                                                   & ((((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                                        & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                                                       >> 3U) 
                                                      | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__3__KET____DOT__dut__DOT__sum1) 
                                                         & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid = 
        ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
         | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
            & ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b) 
               | (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b))));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin 
        = ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
           & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b));
    vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin 
        = (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
           | (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
               ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
              & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)));
}

void Vtb_BCD_Adder___024root___eval_act(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_BCD_Adder___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_BCD_Adder___024root___eval_nba(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_BCD_Adder___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_BCD_Adder___024root___timing_resume(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_BCD_Adder___024root___eval_triggers__act(Vtb_BCD_Adder___024root* vlSelf);

bool Vtb_BCD_Adder___024root___eval_phase__act(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_BCD_Adder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_BCD_Adder___024root___timing_resume(vlSelf);
        Vtb_BCD_Adder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_BCD_Adder___024root___eval_phase__nba(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_BCD_Adder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_BCD_Adder___024root___dump_triggers__nba(Vtb_BCD_Adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_BCD_Adder___024root___dump_triggers__act(Vtb_BCD_Adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_BCD_Adder___024root___eval(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_BCD_Adder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_BCD_Adder.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_BCD_Adder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_BCD_Adder.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_BCD_Adder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_BCD_Adder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_BCD_Adder___024root___eval_debug_assertions(Vtb_BCD_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
