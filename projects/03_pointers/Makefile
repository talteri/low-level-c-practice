# Uses clang (Apple’s native compiler)

CC     = clang
CFLAGS = -Wall -Wextra -Werror -std=c11

# Program names
PROGS = pointer_basics pointer_sizes swap pointer_to_pointer

all: $(PROGS)

pointer_basics: pointer_basics.c
	$(CC) $(CFLAGS) pointer_basics.c -o pointer_basics

pointer_sizes: pointer_sizes.c
	$(CC) $(CFLAGS) pointer_sizes.c -o pointer_sizes

swap: swap.c
	$(CC) $(CFLAGS) swap.c -o swap

pointer_to_pointer: pointer_to_pointer.c
	$(CC) $(CFLAGS) pointer_to_pointer.c -o pointer_to_pointer

clean:
	rm -f $(PROGS)

.PHONY: all clean