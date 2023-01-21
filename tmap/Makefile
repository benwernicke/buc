CC := gcc
DEBUG_FLAGS    := -msse4.2 -Wall -pedantic -g -fsanitize=leak -fsanitize=undefined -fsanitize=address
RELEASE_FLAGS  := -msse4.2 -march=native -mtune=native -O3 -flto

test_a.out := test.o map.o

bench_a.out := cw.o map.o

SRC := $(wildcard *.c)
OBJ := ${SRC:c=o}
TARGETS := test_a.out bench_a.out

.PHONY: clean all release debug

all: debug

clean:
	rm *.out *.o

bench: release
bench:
	hyperfine -N './bench_a.out lorem'

debug: CFLAGS := ${DEBUG_FLAGS}
debug: ${TARGETS}

release: CFLAGS := ${RELEASE_FLAGS}
release: ${TARGETS}

${TARGETS}: ${OBJ}
	${CC} ${CFLAGS} ${$@} -o $@
	
%.o: %.c
	${CC} ${CFLAGS} $< -c -o $@
