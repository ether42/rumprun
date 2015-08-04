include ../Makefile.inc

# it seems gnu make can't handle filenames with spaces...
ALL=shell_check.bin

all: $(ALL)
	cp shell_check.bin space\ check.bin
	cp shell_check.bin quote\'\"check.bin
	cp shell_check.bin semicolon\;check.bin
	cp shell_check.bin quote\'check.bin
	cp shell_check.bin quote\"check.bin
	cp shell_check.bin dual\"quote\"check.bin
	cp shell_check.bin \"nested\\\"quote\\\"check\".bin
clean:
	rm -f space\ check.bin \
	quote\'\"check.bin \
	semicolon\;check.bin \
	quote\"check.bin \
	quote\'check.bin \
	dual\"quote\"check.bin \
	\"nested\\\"quote\\\"check\".bin
