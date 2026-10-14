ASYNCHRONOUS FIFO
=================

Overview
--------
An asynchronous FIFO transfers words between two clock domains that are not
assumed to have the same frequency or phase. The write side uses wclk and the
read side uses rclk. The memory is dual-port: writes are controlled in the
write-clock domain and reads are addressed in the read-clock domain.

This project follows the architecture shown in design.png. Each side maintains
its own binary pointer and Gray-coded pointer. The Gray-coded pointer crosses
to the other clock domain through a two-flop synchronizer. The write side uses
the synchronized read pointer to determine wfull; the read side uses the
synchronized write pointer to determine rempty.

Default learning configuration
------------------------------
- Data width: 8 bits
- FIFO depth: 8 words
- Write and read clocks: independent
- Write and read resets: active-low, one for each clock domain
- Pointer width: 4 bits (3 address bits plus one wrap bit)

Ports
-----
wclk, rclk : Independent write and read clocks.
wrst_n     : Active-low write-domain reset.
rrst_n     : Active-low read-domain reset.
winc       : Request to write wdata; accepted only when wfull is low.
rinc       : Request to read; accepted only when rempty is low.
wdata      : Data input for a write.
rdata      : Data at the current read address; meaningful only when rempty is low.
wfull      : Write-domain full flag.
rempty     : Read-domain empty flag.

How to study the design
-----------------------
1. Review single-bit two-flop synchronizers and why unrelated clocks can cause
   metastability.
2. Practice binary and Gray-code pointer conversion. Consecutive Gray values
   differ in one bit.
3. Trace how each Gray pointer is synchronized into the opposite domain.
4. Derive the local full and empty tests from the next pointers.
5. Build the dual-clock memory behavior and verify FIFO ordering.
6. Test independent clock rates, phases, pointer wraparound, full/empty
   boundaries, and reset behavior.

A two-flop synchronizer reduces metastability risk; it cannot make metastability
impossible. Synchronize pointer state using Gray code rather than synchronizing
each bit of arbitrary multi-bit data independently. Functional simulation does
not model physical metastability or replace CDC analysis and implementation
constraints.
