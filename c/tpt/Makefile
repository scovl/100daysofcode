# Name of the executable
TARGET = main

# Compiler to use
CC = clang

# Compilation options
CFLAGS = -Wall -Wextra -pedantic -std=c99

# Directories
SRCDIR = src
INCDIR = include
OBJDIR = obj

# Manually listing source files
SOURCES = src/main.c src/math_ops.c src/tools.c src/utils.c

# Converting source file paths to object file paths
OBJECTS = $(SOURCES:S^$(SRCDIR)^$(OBJDIR)^:.c=.o)

INCLUDES = -I$(INCDIR)

# Default target to build the final executable
all: $(TARGET)

# Creating the obj directory before compiling the objects
$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Linking objects to form the executable
$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

# Compiling each object file
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Rule to clean compiled files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Declaring phony targets to avoid conflicts with files of the same name
.PHONY: clean all
