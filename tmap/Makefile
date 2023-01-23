CC := gcc
DEBUG_FLAGS    := -msse4.2 -Wall -pedantic -g -fsanitize=leak -fsanitize=undefined -fsanitize=address
RELEASE_FLAGS  := -msse4.2 -march=native -mtune=native -O3 -flto -DNDEBUG

test_a.out := test.o a.o
test_b.out := test.o b.o
test_c.out := test.o c.o
test_d.out := test.o d.o
test_v.out := test.o v.o

bench_a.out := cw.o a.o
bench_b.out := cw.o b.o
bench_c.out := cw.o c.o
bench_d.out := cw.o d.o
bench_v.out := cw.o v.o

SRC := $(wildcard *.c)
OBJ := ${SRC:c=o}
TARGETS := test_a.out bench_a.out test_b.out bench_b.out test_c.out bench_c.out test_d.out bench_d.out test_v.out bench_v.out
LOG     := bench_a.log bench_b.log bench_c.log bench_d.log bench_v.log bench_w.log

.PHONY: clean all release debug

all: debug

clean:
	rm -f *.out *.o *.log

bench: release
bench:
	hyperfine -N './bench_a.out lorem' './bench_b.out lorem' './bench_c.out lorem' './bench_d.out lorem' './bench_v.out lorem'

debug: CFLAGS := ${DEBUG_FLAGS}
debug: ${TARGETS}

val: release
val: ${LOG}

release: CFLAGS := ${RELEASE_FLAGS}
release: ${TARGETS}

${TARGETS}: ${OBJ}
	${CC} ${CFLAGS} ${$@} -o $@
	
%.o: %.c
	${CC} ${CFLAGS} $< -c -o $@

%.log: %.out
	valgrind --log-file=$@ ./$< lorem >/dev/null
