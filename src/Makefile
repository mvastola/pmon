.DEFAULT: all

TARGETS = $(patsubst %.c,%.out,$(wildcard *.c))
TARGETS += $(patsubst %.cpp,%.out,$(wildcard *.cpp))

all: $(TARGETS)

pmon5.out: pmon5.cpp
	g++ -O0 -std=c++11 -g3 -o $@ $<

pmon4.out: pmon4.c
	gcc -O0 -g3 -o $@ $<

pmon3.out: pmon3.c
	gcc -O0 -g3 -o $@ $<

pmon2.out: pmon2.c
	gcc -O0 -g3 -o $@ $<

pmon.out: pmon.c
	gcc -O0 -g3 -o $@ $<

reaper.out: reaper.c
	gcc -O0 -g3 -o $@ $<

clean:
	rm -f *.out
