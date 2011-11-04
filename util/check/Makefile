all : check

check : check.cc
	g++ check.cc -o check
	./check sorted.sample
	./check unsorted.sample

clean: 
	rm -f check check.exe
