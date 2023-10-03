# Define compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11

# Default target: build the executable
all: $(TARGET)

# Rule to build the executable from the source file (use basename to remove extensions)
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# Clean rule to remove the generated executable
clean:
	rm -f $(TARGET)
