run = ../../bin/suite "luajit ./$@.lua" $1

COWARD=100000
HERO=10000000

bubble : common.lua bubble.lua
	$(call run, $(COWARD))
insert : common.lua insert.lua
	$(call run, $(COWARD))
select : common.lua select.lua
	$(call run, $(COWARD))
shell : common.lua shell.lua
	$(call run, $(COWARD))

quick : common.lua quick.lua
	$(call run, $(HERO))
builtin : common.lua builtin.lua
	$(call run, $(HERO))
heap : common.lua heap.lua
	$(call run, $(HERO))
radix : common.lua radix.lua
	$(call run, $(HERO))
merge : common.lua merge.lua
	$(call run, $(HERO))

clean : 
	rm sort.out
