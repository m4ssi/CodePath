CC=gcc
CFLAGS=-Wall -g3
BIN=./bin/
OBJ=./obj/
SRC=./src/
INC= -I./include/ -I./include/utils

UTILS=./src/utils/
MAIN=${SRC}main.c ${UTILS}common.c


all: sum_all sum_odd_oven long_word

asci_freq: ${MAIN} ${SRC}asci_freq.c ${UTILS}file.c
	${CC} ${CFLAGS} -DASCI_FREQ=1 -o ${BIN}$@ $^ ${INC}

long_word: ${MAIN} ${SRC}long_word.c ${UTILS}file.c
	${CC} ${CFLAGS} -DLONG_WORD=1 -o ${BIN}$@ $^ ${INC}

sum_all: ${MAIN} ${SRC}sum.c ${UTILS}array.c
	${CC} ${CFLAGS} -DSUM_VERSION=0 -o ${BIN}$@ $^ ${INC}

sum_odd_oven: ${MAIN} ${SRC}sum.c ${UTILS}array.c
	${CC} ${CFLAGS} -DSUM_VERSION=1 -o ${BIN}$@ $^ ${INC}

clean:
	@rm -rf ${OBJ}*

mrproper:
	@rm -rf ${BIN}*
