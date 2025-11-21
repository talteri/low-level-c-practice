# =============================
#  Apple-Style Makefile Template
#  Lesson 2 - Variables & Data Types
# =============================

# Compiler and flags
CC       := clang
CFLAGS   := -Wall -Wextra -Werror -std=c11 -Iinclude
DEBUG    := -g -O0
RELEASE  := -O2

# Project files
SRC_DIR  := src
OBJ_DIR  := build
TARGET   := lesson2_variables
SRC      := $(SRC_DIR)/variables.c $(SRC_DIR)/converter.c main.c
OBJ      := $(patsubst %.c,$(OBJ_DIR)/%.o,$(notdir $(SRC)))

# Colors
GREEN := \033[1;32m
BLUE  := \033[1;34m
RESET := \033[0m

# Default build mode
MODE ?= RELEASE

# =============================
#  Build Rules
# =============================

all: $(TARGET)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Rule for source files in src/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "$(BLUE)Compiling:$<$(RESET)"
	@$(CC) $(CFLAGS) $($(MODE)) -c $< -o $@

# Rule for main.c or any .c in project root
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@echo "$(BLUE)Compiling:$<$(RESET)"
	@$(CC) $(CFLAGS) $($(MODE)) -c $< -o $@


$(TARGET): $(OBJ)
	@echo "$(GREEN)Linking:$(RESET) $@"
	@$(CC) $(OBJ) -o $@
	@echo "$(GREEN)Build successful!$(RESET)"

# =============================
#  Build Modes
# =============================

debug:
	@$(MAKE) MODE=DEBUG

release:
	@$(MAKE) MODE=RELEASE

# =============================
#  Clean Rules
# =============================

clean:
	@echo "$(BLUE)Cleaning build files...$(RESET)"
	@rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: all clean debug release
