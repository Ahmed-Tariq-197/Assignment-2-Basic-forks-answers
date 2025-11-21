#include <stdio.h>

void hello() {
    printf("Hello from file1.c!\n");
    printf("This function was compiled separately and linked.\n");
}

int calculate_sum(int a, int b) {
    printf("Calculating %d + %d = %d\n", a, b, a + b);
    return a + b;
}

void display_info() {
    printf("\n=== Linker Demonstration ===\n");
    printf("file1.c provides function implementations\n");
    printf("file2.c calls these functions\n");
    printf("Linker combines them into one executable\n");
    printf("============================\n\n");
}