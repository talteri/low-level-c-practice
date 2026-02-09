CC      := clang
TARGET  := pointers_and_const
SRC     := pointers_and_const.c

CFLAGS_COMMON := -std=c17 -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Wsign-conversion
CFLAGS_DEBUG  := -g3 -O0 -DDEBUG
CFLAGS_RELEASE := -O2 -DNDEBUG
SANITIZERS := -fsanitize=address,undefined -fno-omit-frame-pointer

.PHONY: all debug release asan run clean

all: debug

debug: $(TARGET)

release: CFLAGS := $(CFLAGS_COMMON) $(CFLAGS_RELEASE)
release: clean $(TARGET)

asan: CFLAGS := $(CFLAGS_COMMON) $(CFLAGS_DEBUG) $(SANITIZERS)
asan: clean $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: debug
	./$(TARGET)

clean:
	rm -f $(TARGET)
