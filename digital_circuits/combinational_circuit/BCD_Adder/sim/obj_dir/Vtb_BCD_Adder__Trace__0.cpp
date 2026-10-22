// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_BCD_Adder__Syms.h"


void Vtb_BCD_Adder___024root__trace_chg_0_sub_0(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_BCD_Adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_chg_0\n"); );
    // Init
    Vtb_BCD_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_BCD_Adder___024root*>(voidSelf);
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_BCD_Adder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_BCD_Adder___024root__trace_chg_0_sub_0(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_BCD_Adder__DOT__a),4);
        bufp->chgCData(oldp+1,(vlSelf->tb_BCD_Adder__DOT__b),4);
        bufp->chgIData(oldp+2,(vlSelf->tb_BCD_Adder__DOT__PASS),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_BCD_Adder__DOT__FAIL),32);
        bufp->chgBit(oldp+4,((1U & (IData)(vlSelf->tb_BCD_Adder__DOT__a))));
        bufp->chgBit(oldp+5,((1U & (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                    ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b)))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                    >> 1U))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__b) 
                                    >> 1U))));
        bufp->chgBit(oldp+9,((1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                     & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                                    >> 1U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                     >> 2U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__b) 
                                     >> 2U))));
        bufp->chgBit(oldp+12,((1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                      & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                                     >> 2U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                     >> 3U))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__b) 
                                     >> 3U))));
        bufp->chgBit(oldp+15,((1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                      & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                                     >> 3U))));
        bufp->chgIData(oldp+16,(vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+18,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                  & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)))));
        bufp->chgBit(oldp+19,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1));
        bufp->chgBit(oldp+20,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                               & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))));
        bufp->chgBit(oldp+21,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid));
        bufp->chgCData(oldp+22,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                                  << 4U) | (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin) 
                                             << 3U) 
                                            | (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin) 
                                                << 2U) 
                                               | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin) 
                                                  << 1U))))),5);
        bufp->chgBit(oldp+23,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin));
        bufp->chgBit(oldp+24,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b));
        bufp->chgBit(oldp+25,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin));
        bufp->chgBit(oldp+26,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__1__KET____DOT__dut__DOT__sum1));
        bufp->chgBit(oldp+27,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__1__KET____DOT__dut__DOT__sum1) 
                               & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin))));
        bufp->chgBit(oldp+28,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b));
        bufp->chgBit(oldp+29,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin));
        bufp->chgBit(oldp+30,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__2__KET____DOT__dut__DOT__sum1));
        bufp->chgBit(oldp+31,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__2__KET____DOT__dut__DOT__sum1) 
                               & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin))));
        bufp->chgBit(oldp+32,(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0));
        bufp->chgBit(oldp+33,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__3__KET____DOT__dut__DOT__sum1));
        bufp->chgBit(oldp+34,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__3__KET____DOT__dut__DOT__sum1) 
                               & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))));
        bufp->chgCData(oldp+35,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                  << 2U) | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                            << 1U))),4);
        bufp->chgCData(oldp+36,(((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                   & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                                  << 4U) | (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin) 
                                             << 3U) 
                                            | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin) 
                                               << 2U)))),5);
        bufp->chgBit(oldp+37,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                               ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b))));
        bufp->chgBit(oldp+38,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin));
        bufp->chgBit(oldp+39,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                               ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin))));
        bufp->chgBit(oldp+40,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                               ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b))));
        bufp->chgBit(oldp+42,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                               & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b))));
        bufp->chgBit(oldp+43,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                               & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin))));
        bufp->chgBit(oldp+44,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                               ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))));
    }
    bufp->chgCData(oldp+45,(((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                               ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                              << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                           ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                          ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                                     ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                                         ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b))))))),4);
    bufp->chgCData(oldp+46,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                              << 3U) | (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                                         ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b))))))),4);
}

void Vtb_BCD_Adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_cleanup\n"); );
    // Init
    Vtb_BCD_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_BCD_Adder___024root*>(voidSelf);
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
