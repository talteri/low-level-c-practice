CC      := clang
TARGET  := error_handling_demo

SRC     := main.c error_utils.c
OBJ     := $(SRC:.c=.o)

CFLAGS_COMMON := -std=c17 -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Wsign-conversion
CFLAGS_DEBUG  := -g3 -O0 -DDEBUG
CFLAGS_RELEASE := -O2 -DNDEBUG
SANITIZERS := -fsanitize=address,undefined -fno-omit-frame-pointer

.PHONY: all debug release asan run clean

all: debug

debug: CFLAGS := $(CFLAGS_COMMON) $(CFLAGS_DEBUG)
debug: $(TARGET)

release: CFLAGS := $(CFLAGS_COMMON) $(CFLAGS_RELEASE)
release: clean $(TARGET)

asan: CFLAGS := $(CFLAGS_COMMON) $(CFLAGS_DEBUG) $(SANITIZERS)
asan: clean $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c error_utils.h
	$(CC) $(CFLAGS) -c $< -o $@

run: debug
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)
