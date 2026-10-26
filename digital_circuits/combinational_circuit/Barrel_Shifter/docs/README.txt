BARREL SHIFTER (ROTATE LEFT)
============================

Overview
--------
This module is a combinational, parameterized rotator. For the default WIDTH
of 8, it circularly rotates the input word left by the amount selected by sel.
Bits shifted out of the most-significant end wrap around into the least-
significant end; zeros are not shifted in.

For WIDTH=8:
- sel = 3'b000: out = in
- sel = 3'b001: rotate left by 1 bit
- sel = 3'b010: rotate left by 2 bits
- sel = 3'b011: rotate left by 3 bits
- ...
- sel = 3'b111: rotate left by 7 bits

The RTL uses a cascade of mux stages. Stage i conditionally rotates by
2^(i-1) positions when sel[i-1] is high. Together, the stages implement the
rotation amount encoded by sel.

Interface
---------
in  : WIDTH-bit input word.
sel : $clog2(WIDTH)-bit rotation amount.
out : WIDTH-bit rotated word.

There is no clock, reset, or state. The output responds combinationally to
changes in in or sel.

Current testbench
-----------------
The testbench uses WIDTH=8, applies eight data patterns, and checks all eight
rotation amounts for each pattern. It compares the output with a rotate-left
reference expression and reports PASS/FAIL counts.

Run from this folder:
- make compile : compile RTL and testbench with Icarus Verilog.
- make run     : compile and run the testbench, saving its log in docs.
- make check   : run and summarize PASS/FAIL lines.
- make wave    : run and open the VCD waveform in GTKWave.

Parameterization note
---------------------
The current stage structure is intended for power-of-two WIDTH values of at
least 2. For WIDTH=8, sel has 3 bits and selects rotations 0 through 7. A
non-power-of-two width or WIDTH=1 needs additional parameter handling and
should not be assumed to work from this implementation without verification.
