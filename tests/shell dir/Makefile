include ../Makefile.inc

# it seems gnu make can't handle filenames with spaces...
ALL=shell_check.bin

all: $(ALL)
	cp shell_check.bin \;\'\"escaping\\\"\'\"\ \"\ \ test.bin
clean:
	rm -f \;\'\"escaping\\\"\'\"\ \"\ \ test.bin
