CC = gcc
CFLAGS = -Wall -Wextra -g 

all: allocator

allocator: main.o allocator.o
	$(CC) $(CFLAGS) main.o allocator.o -o allocator

main.o: main.c allocator.h
	$(CC) $(CFLAGS) -c main.c

allocator.o: allocator.c allocator.h
	$(CC) $(CFLAGS) -c allocator.c

clean:
	rm -f *.o allocator 