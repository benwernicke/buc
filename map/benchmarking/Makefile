DEBUG_FLAGS := -g -Og -Wall -pedantic -fsanitize=address -fsanitize=leak -fsanitize=undefined
FAST_FLAGS	:= -O3 -march=native -mtune=native
CC			:= gcc
CFLAGS		:= ${DEBUG_FLAGS}

cw_base 	:= bench/cw.o lib/util.o
test_base 	:= lib/util.o test.o
cw_a		:= maps/map_a.o ${cw_base}
cw_b		:= maps/map_b.o ${cw_base}
test_a		:= maps/map_a.o ${test_base}
test_b		:= maps/map_b.o ${test_base}

objects			:= ${cw_a}  ${cw_b} ${test_base}
bench_targets	:= cw_a cw_b
test_targets	:= test_a test_b

all: test

bench: CFLAGS := ${FAST_FLAGS}
bench: ${bench_targets}
	hyperfine -N './target/cw_a bench/lorem' './target/cw_b bench/lorem'

test: ${test_targets}
	echo "[running] unit tests" && \
		./target/test_a			&& \
		./target/test_b

%.o: %.c
	${CC} $< ${CFLAGS} -c -o $@ 

cw_a: ${cw_a}
	${CC} ${$@} ${CFLAGS} -o target/$@ 

cw_b: ${cw_b}
	${CC} ${$@} ${CFLAGS} -o target/$@

test_a: ${test_a}
	${CC} ${$@} ${CFLAGS} -o target/$@

test_b: ${test_b}
	${CC} ${$@} ${CFLAGS} -o target/$@

clean: 
	rm ${objects} target/*

.PHONY: all clean bench test
