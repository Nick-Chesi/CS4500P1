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
# Takes our list.c and list_test.c and makes them into 
# the .o's and into a bash so that we can kick off the test
# with ./list_test
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile list_test.c to list_test.o
list_test.o: list_test.c list.h
	$(CC) $(CFLAGS) -c list_test.c

# Clean
clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
