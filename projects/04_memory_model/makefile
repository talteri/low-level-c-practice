# Lesson 04 - Memory Model
# Build with Clang (Apple-style), strict warnings, and optional sanitizers.

CC      := clang
TARGET  := memory_model
SRC     := memory_model.c

# Common warnings: tight but reasonable for interview-quality C
CFLAGS_COMMON := -std=c17 -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Wsign-conversion

# Debug: symbols + no optimization (easy debugging)
CFLAGS_DEBUG := -g3 -O0 -DDEBUG

# Release: optimized like real builds
CFLAGS_RELEASE := -O2 -DNDEBUG

# Sanitizers (great for catching UB, UAF, OOB during development)
# Note: AddressSanitizer isn't available on iOS devices, but it's excellent on macOS/Linux for dev.
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
