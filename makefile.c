CC = gcc
CFLAGS = -Wall -Wextra
BIN = bin

all: directories process_creation linked_program simple_program

directories:
	@mkdir -p $(BIN)

process_creation: process_creation.c
	$(CC) $(CFLAGS) process_creation.c -o $(BIN)/process_creation

linked_program: file1.c file2.c
	$(CC) $(CFLAGS) file1.c file2.c -o $(BIN)/linked_program

simple_program: simple_program.c
	$(CC) $(CFLAGS) simple_program.c -o $(BIN)/simple_program

run: all
	@echo "\n=== Running process_creation ==="
	./$(BIN)/process_creation
	@echo "\n=== Running linked_program ==="
	./$(BIN)/linked_program
	@echo "\n=== Running simple_program ==="
	./$(BIN)/simple_program
	@echo "\n=== Library dependencies ==="
	ldd ./$(BIN)/simple_program

clean:
	rm -rf $(BIN) *.o

.PHONY: all clean run directories