# Compiler
CC := gcc
# Compiler flags
CFLAGS := -Wall -Wextra -std=c11
# Source directory
SRC_DIR := src
# Binary directory
BIN_DIR := bin

# List of source files
SOURCES := $(wildcard $(SRC_DIR)/*.c)
# List of object files
OBJECTS := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%.o,$(SOURCES))
# Name of the executable
EXECUTABLE := $(BIN_DIR)/main

# Default target
all: $(EXECUTABLE)

# Rule to compile source files into object files
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link object files into the executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

# Clean rule to remove generated files
clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean
