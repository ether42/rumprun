.PHONY: all-tests
all-tests:
	$(MAKE) -C hello
	$(MAKE) -C basic
	$(MAKE) -C crypto
	$(MAKE) -C shell

.PHONY: clean
clean:
	$(MAKE) -C hello clean
	$(MAKE) -C basic clean
	$(MAKE) -C crypto clean
	$(MAKE) -C shell clean
	[ ! -f configure/Makefile ] || $(MAKE) -C configure distclean
