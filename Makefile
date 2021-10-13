IDIR=./inc
CC=gcc
CFLAGS=-ggdb -Wextra -Werror -masm=intel -I${IDIR} -lpthread
OBJ=main.o threadpool.o

%.o : %.c
	${CC} -c -o $@ $< ${CFLAGS}

asmtf: ${OBJ} ${ASM}
	${CC} -o $@ $^ ${CFLAGS}

all: asmtf

clean: 
	rm *.o