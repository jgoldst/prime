CC=gcc
CFLAGS=-Wall -Wextra

prime: prime.o
	gcc -o prime prime.c

clean:
	$(RM) prime prime.o
