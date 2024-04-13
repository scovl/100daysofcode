TARGET = main

CC = clang
CFLAGS = -Wall -Wextra -pedantic -std=c99
SRCDIR = src
INCDIR = include
OBJDIR = obj
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

# include dirs
INCLUDES = -I$(INCDIR)

# compilation role
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# remove objs
clean:
	$(RM) $(OBJECTS) $(TARGET)
