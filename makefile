CC=gcc
CFLAGS=-I.
DEPS = calc.h io.h
OBJ = prime.o calc.o io.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

prime: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
