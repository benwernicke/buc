DEBUG_FLAGS := -g -Og -Wall -pedantic -fsanitize=address -fsanitize=leak -fsanitize=undefined
FAST_FLAGS	:= -O3 -march=native -mtune=native
CC			:= gcc
CFLAGS		:= ${DEBUG_FLAGS}

cw_base 	:= bench/cw.o lib/util.o
test_base 	:= lib/util.o test.o

cw_a.out	:= maps/map_a.o ${cw_base}
cw_b.out	:= maps/map_b.o ${cw_base}
test_a.out	:= maps/map_a.o ${test_base}
test_b.out	:= maps/map_b.o ${test_base}

objects			:= ${test_a.out} ${test_b.out} ${cw_a.out} ${cw_b.out}
bench_targets	:= cw_a.out cw_b.out
test_targets	:= test_a.out test_b.out

all:

bench: CFLAGS := ${FAST_FLAGS}
bench: ${bench_targets}
	hyperfine -N './target/cw_a bench/lorem' './target/cw_b bench/lorem'

test: ${test_targets}
	echo "[running] unit tests"  	&& \
		./target/test_a.out			&& \
		./target/test_b.out

%.o: %.c
	${CC} $< ${CFLAGS} -c -o $@ 

%.out: ${objects}
	${CC} ${$@} ${CFLAGS} -o target/$@ 

clean: 
	rm ${objects} target/*

.PHONY: all clean bench test
