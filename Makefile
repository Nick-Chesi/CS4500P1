# Compiler
CC=gcc

# Flags
CFLAGS=-Wall

# Target
TARGET=list_test

# Objects
OBJS=list.o list_test.o

# Default target, for the default make 
all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile list_test.c to list_test.o
list_test.o: list_test.c list.h
    $(CC) $(CFLAGS) -c list_test.c

# Clean
clean:
    rm -f $(TARGET) $(OBJS)

# Idk what this does but geeks for geeks has it
# I think it does something with clean and all if I had to guess!
.PHONY: all clean
