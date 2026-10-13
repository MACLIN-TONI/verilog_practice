Byte-Enabled RAM: Concept and Learning Notes
============================================

What is a byte-enabled RAM?
---------------------------

A byte-enabled RAM stores words wider than one byte and lets a write update
selected 8-bit portions (byte lanes) of a word. The remaining byte lanes keep
their previous values. This is useful when a datapath writes a byte or halfword
inside a wider word without changing the other bytes.

This exercise is a 16-word x 32-bit single-port synchronous RAM. It has a
4-bit word address, a 32-bit input/output data path, and four byte-enable bits.
The single port performs a write when `we` is high and a synchronous read when
`we` is low.

Byte lane mapping
-----------------

- byte_en[0] controls din[7:0]   (least significant byte)
- byte_en[1] controls din[15:8]
- byte_en[2] controls din[23:16]
- byte_en[3] controls din[31:24] (most significant byte)

At a rising clock edge, a write occurs only when `we` is high. Within that
word, each byte with its byte-enable bit set is updated from the corresponding
part of `din`. Bytes with their byte-enable bit clear retain their old values.
If all byte enables are zero, the write leaves the whole word unchanged.

Read and write timing
---------------------

Reads are synchronous and registered. When `we` is low at a rising edge, the
word at `addr` is sampled into `dout`. During a write, `dout` holds its previous
value. Because `we` chooses one operation, this interface does not read and
write simultaneously.

There is no reset. Initial memory contents and `dout` are unknown in simulation.
Before testing partial writes, initialize the target word with all byte lanes
enabled; otherwise untouched bytes remain unknown.

RTL learning points
-------------------

- Use a clocked write process with one conditional update per byte lane.
- Keep all byte lane slices aligned to the byte-enable bits.
- Preserve disabled byte lanes; do not accidentally clear or overwrite them.
- Do not reset every storage bit unless required and supported by the target
  memory technology.

Verification guidance
---------------------

Initialize a word to a known pattern, then write each byte lane separately and
check that only the selected lane changes. Also test multiple enabled lanes,
all lanes enabled, no lanes enabled, writes to different addresses, output hold
during writes, and synchronous reads after writes. Use values with visibly
different bytes so a wrong lane mapping is easy to detect.
