// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_BCD_Adder__Syms.h"


VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_init_sub__TOP__0(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_BCD_Adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"carry_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"PASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+4,0,"FAIL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"c_out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"c_out2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"invalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rca1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+20,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("fa_stage[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ha1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ha2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fa_stage[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ha1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ha2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fa_stage[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ha1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ha2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fa_stage[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ha1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ha2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+34,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rca2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+21,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("fa_stage[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ha1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ha2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fa_stage[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ha1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ha2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fa_stage[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ha1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ha2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fa_stage[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ha1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ha2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_init_top(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_init_top\n"); );
    // Body
    Vtb_BCD_Adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_BCD_Adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_BCD_Adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_register(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_BCD_Adder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_BCD_Adder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_BCD_Adder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_BCD_Adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_const_0_sub_0(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_const_0\n"); );
    // Init
    Vtb_BCD_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_BCD_Adder___024root*>(voidSelf);
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_BCD_Adder___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_const_0_sub_0(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+48,(4U),32);
    bufp->fullBit(oldp+49,(0U));
}

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_full_0_sub_0(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_full_0\n"); );
    // Init
    Vtb_BCD_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_BCD_Adder___024root*>(voidSelf);
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_BCD_Adder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_BCD_Adder___024root__trace_full_0_sub_0(Vtb_BCD_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_BCD_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_BCD_Adder___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_BCD_Adder__DOT__a),4);
    bufp->fullCData(oldp+2,(vlSelf->tb_BCD_Adder__DOT__b),4);
    bufp->fullIData(oldp+3,(vlSelf->tb_BCD_Adder__DOT__PASS),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_BCD_Adder__DOT__FAIL),32);
    bufp->fullBit(oldp+5,((1U & (IData)(vlSelf->tb_BCD_Adder__DOT__a))));
    bufp->fullBit(oldp+6,((1U & (IData)(vlSelf->tb_BCD_Adder__DOT__b))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                 ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b)))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                 >> 1U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__b) 
                                 >> 1U))));
    bufp->fullBit(oldp+10,((1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                   & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                                  >> 1U))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                  >> 2U))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__b) 
                                  >> 2U))));
    bufp->fullBit(oldp+13,((1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                   & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                                  >> 2U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                  >> 3U))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__b) 
                                  >> 3U))));
    bufp->fullBit(oldp+16,((1U & (((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                   & (IData)(vlSelf->tb_BCD_Adder__DOT__b)) 
                                  >> 3U))));
    bufp->fullIData(oldp+17,(vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_BCD_Adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullBit(oldp+19,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                            | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                               & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)))));
    bufp->fullBit(oldp+20,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1));
    bufp->fullBit(oldp+21,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))));
    bufp->fullBit(oldp+22,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid));
    bufp->fullCData(oldp+23,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__c_out1) 
                               << 4U) | (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin) 
                                          << 3U) | 
                                         (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin) 
                                           << 2U) | 
                                          ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin) 
                                           << 1U))))),5);
    bufp->fullBit(oldp+24,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin));
    bufp->fullBit(oldp+25,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b));
    bufp->fullBit(oldp+26,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin));
    bufp->fullBit(oldp+27,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__1__KET____DOT__dut__DOT__sum1));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__1__KET____DOT__dut__DOT__sum1) 
                            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__cin))));
    bufp->fullBit(oldp+29,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b));
    bufp->fullBit(oldp+30,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin));
    bufp->fullBit(oldp+31,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__2__KET____DOT__dut__DOT__sum1));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__2__KET____DOT__dut__DOT__sum1) 
                            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin))));
    bufp->fullBit(oldp+33,(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0));
    bufp->fullBit(oldp+34,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__3__KET____DOT__dut__DOT__sum1));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT__fa_stage__BRA__3__KET____DOT__dut__DOT__sum1) 
                            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca1__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))));
    bufp->fullCData(oldp+36,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                               << 2U) | ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                         << 1U))),4);
    bufp->fullCData(oldp+37,(((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                               << 4U) | (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin) 
                                          << 3U) | 
                                         ((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin) 
                                          << 2U)))),5);
    bufp->fullBit(oldp+38,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                            ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b))));
    bufp->fullBit(oldp+39,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin));
    bufp->fullBit(oldp+40,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                            ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin))));
    bufp->fullBit(oldp+41,(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                            ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b))));
    bufp->fullBit(oldp+43,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b))));
    bufp->fullBit(oldp+44,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                             ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                            & (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                            ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin))));
    bufp->fullCData(oldp+46,(((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                                ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__3__KET____DOT__dut__cin)) 
                               << 3U) | (((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                            ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b)) 
                                           ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__cin)) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__invalid) 
                                            ^ (IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                                 ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b))))))),4);
    bufp->fullCData(oldp+47,((((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT____VdfgTmp_h0945d99b__0) 
                               << 3U) | (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__2__KET____DOT__dut__b) 
                                          << 2U) | 
                                         (((IData)(vlSelf->tb_BCD_Adder__DOT__dut__DOT__rca2__DOT____Vcellinp__fa_stage__BRA__1__KET____DOT__dut__b) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->tb_BCD_Adder__DOT__a) 
                                                 ^ (IData)(vlSelf->tb_BCD_Adder__DOT__b))))))),4);
}
