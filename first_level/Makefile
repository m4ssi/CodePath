CC=gcc
CFLAGS=-Wall -g3
BIN=./bin/
OBJ=./obj/
SRC=./src/
INC= -I./include

all: utils sum_all sum_odd_oven

sum_all: ${SRC}main.c
	${CC} ${CFLAGS} -DSUM_VERSION=0 -o ${BIN}$@ $< ${OBJ}* ${INC}

sum_odd_oven: ${SRC}main.c
	${CC} ${CFLAGS} -DSUM_VERSION=1 -o ${BIN}$@ $< ${OBJ}* ${INC}

utils: ${SRC}utils.c
	${CC} ${CFLAGS} -c -o ${OBJ}$@.o $^ ${INC}

clean:
	@rm -rf ${OBJ}*

mrproper:
	@rm -rf ${BIN}*
