CC=gcc
STD=c11

%.o: %.c
	$(CC) -o $@ $< $(CFLAGS)

build: main.o
    gcc -g -std=$(STD) main.c -o main

debug: main.o
    gcc -g -std=$(STD) main.c -o main -g

.PHONY: clean
clean:
	rm -f *.o
