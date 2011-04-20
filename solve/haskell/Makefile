run = ghc $^ -o $@; \
	  ../../bin/suite ./$@ $1; \
      rm $@ Common.hi Common.o $@.hi $@.o

COWARD=100000
HERO=100000

Bubble : Common.hs Bubble.hs
	$(call run, $(COWARD))
Insert : Common.hs Insert.hs
	$(call run, $(COWARD))
Select : Common.hs Select.hs
	$(call run, $(COWARD))
Shell : Common.hs Shell.hs
	$(call run, $(COWARD))

Quick : Common.hs Quick.hs
	$(call run, $(COWARD))
Builtin : Common.hs Builtin.hs
	$(call run, $(HERO))
Heap : Common.hs Heap.hs
	$(call run, $(HERO))
Radix : Common.hs Radix.hs
	$(call run, $(HERO))
Merge : Common.hs Merge.hs
	$(call run, $(HERO))

clean : 
	rm *.hi *.o
