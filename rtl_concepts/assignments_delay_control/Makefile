DUT ?= code

RTL = $(DUT).v

TOP = RTL
SIM = sim.out
WAVE = dump.vcd

compile:
	iverilog -g2012 -o $(SIM) $(RTL) 

run: compile
	vvp $(SIM) 

wave: run
	gtkwave $(WAVE) &

check: run
	@echo "---FAILURES---"
	@grep "FAIL" $(LOG) || echo "NONE"
	@echo "---SUMMARY---"
	@grep "summary\|PASS\|FAIL" $(LOG) | tail -2

clean:
	rm -f $(SIM) 

.PHONY: compile run wave check clean
