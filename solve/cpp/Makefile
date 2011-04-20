run = g++ -Wall $^ -o $@; \
	  ../../bin/suite ./$@ $1; \
      rm -f $@ $@.exe

COWARD=100000
HERO=10000000

bubble : common.hh common.cc bubble.cc
	$(call run, $(COWARD))
insert : common.hh common.cc insert.cc
	$(call run, $(COWARD))
select : common.hh common.cc select.cc
	$(call run, $(COWARD))
shell : common.hh common.cc shell.cc
	$(call run, $(COWARD))

quick : common.hh common.cc quick.cc
	$(call run, $(HERO))
stl : common.hh common.cc stl.cc
	$(call run, $(HERO))
heap : common.hh common.cc heap.cc
	$(call run, $(HERO))
radix : common.hh common.cc radix.cc
	$(call run, $(HERO))
merge : common.hh common.cc merge.cc
	$(call run, $(HERO))
