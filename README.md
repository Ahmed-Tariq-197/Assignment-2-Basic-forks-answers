# Assignment 2 - Basic Forks and C Style Development

CSE233 Operating Systems Course

## Description

This project demonstrates fundamental operating systems concepts including process creation with fork(), compilation and linking of multiple source files, and dynamic loading of programs.

## Contents

- **process_creation.c** - Demonstrates fork() system call
- **file1.c** - Function implementations for linker demo
- **file2.c** - Main program calling functions from file1.c
- **simple_program.c** - Demonstrates loader and dynamic libraries
- **Makefile** - Build automation
- **answers.txt** - Detailed answers to assignment questions
- **screenshots/** - Compilation and execution screenshots

## Prerequisites

- GCC compiler
- Make
- Linux/Unix system

Install on Ubuntu/Debian:
```bash
sudo apt update
sudo apt install build-essential
```

## Building

Compile all programs:
```bash
make all
```

Compile individually:
```bash
make process_creation
make linked_program
make simple_program
```

## Running

Run all programs:
```bash
make run
```

Run individually:
```bash
./bin/process_creation
./bin/linked_program
./bin/simple_program
```

Check dynamic libraries:
```bash
ldd ./bin/simple_program
```

## Cleaning

Remove compiled files:
```bash
make clean
```

## Project Structure

```
Assignment-2-Basic-forks-and-C-Style-Development/
├── process_creation.c
├── file1.c
├── file2.c
├── simple_program.c
├── Makefile
├── answers.txt
├── README.md
├── LICENSE
├── screenshots/
│   ├── compilation.png
│   └── execution.png
└── bin/
    ├── process_creation
    ├── linked_program
    └── simple_program
```

## Concepts Demonstrated

### Process Creation (fork)
- Creating child processes
- Parent-child process relationships
- Process IDs and management

### Linker
- Combines multiple object files
- Resolves external symbols
- Creates executable from separate compilation units

### Loader
- Loads programs into memory
- Loads shared libraries dynamically
- Resolves runtime symbols

## Author

Ahmed Tariq

## License

MIT License - see LICENSE file for details
