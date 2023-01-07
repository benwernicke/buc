DEBUG_FLAGS		:=	-g -Wall -pedantic -Og -fsanitize=address -fsanitize=leak -fsanitize=undefined
RELEASE_FLAGS 	:=	-O2 -march=native -mtune=native
CFLAGS 			:= 	${DEBUG_FLAGS}

objects 		:=	test.o set.o

all: comp

fast: CFLAGS := ${RELEASE_FLAGS}
fast: comp

comp: ${objects}
	${CC} $^ ${CFLAGS} -o out

%.o: %.c
	${CC} $< ${CFLAGS} -c -o $@

clean:
	rm *.o out

.PHONY: clean all fast
