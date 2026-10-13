Synchronous FIFO: Concept and Learning Notes
============================================

What is a FIFO?
---------------

FIFO means first-in, first-out. Data leaves the queue in the same order it was
accepted. A synchronous FIFO uses one clock for both writes (pushes) and reads
(pops). It is commonly used to buffer data between blocks that operate at
the same clock rate or need temporary decoupling.

This exercise uses an 8-entry x 8-bit FIFO. It has a write pointer, a read
pointer, an occupancy count, and storage for eight data words. The pointers
identify the next word to write and the oldest word to read. The count supports
`empty` and `full` status.

Pushes and pops
---------------

A write request (`wr_en`) is accepted only when the FIFO is not full. A read
request (`rd_en`) is accepted only when it is not empty. Accepted operations
occur on rising edges of `clk`.

- Accepted write: store `din` at the write pointer and advance that pointer.
- Accepted read: put the oldest word on `dout` and advance the read pointer.
- Accepted write only: increase occupancy by one.
- Accepted read only: decrease occupancy by one.
- Both accepted together: perform both operations and keep occupancy unchanged.

The read output is registered and holds its previous value when no read is
accepted. There is no fall-through behavior: when empty, a simultaneous write
and read accepts the write but rejects the read, because `empty` was true at
the start of that edge. The new word can be read on a later edge.

Full and empty behavior
-----------------------

`empty` is true when the occupancy count is zero; `full` is true when it is
eight. Requests that are not accepted do not change the pointers or occupancy.
At full, simultaneous read and write accepts the read but rejects the write,
because `full` was true at the start of the edge. Occupancy then decreases by
one.

Reset behavior
--------------

The spec uses a synchronous active-high reset. On a rising edge with reset
asserted, pointers and occupancy return to their empty state and `dout` clears
to zero; requests are ignored. The storage array itself is not cleared. Old
memory values are inaccessible while empty and are overwritten as new words
are pushed.

RTL learning points
-------------------

- Keep read and write pointers separate and wrap them at the FIFO depth.
- Track occupancy so full and empty can be distinguished reliably.
- Handle simultaneous accepted pushes and pops without changing the count.
- Base acceptance on the current full and empty flags and document boundary
  behavior.
- Do not clear the entire storage array on reset unless the target memory
  resource supports it and the design requires it.

Verification guidance
---------------------

Test empty and full boundaries, rejected requests, FIFO ordering, pointer wrap,
simultaneous operations, and reset. Fill the FIFO, check that another push is
rejected, drain it, check that another pop is rejected, and verify data order
across pointer wraparound.
