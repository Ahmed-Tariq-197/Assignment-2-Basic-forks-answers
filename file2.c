#include <stdio.h>

void hello();
int calculate_sum(int a, int b);
void display_info();

int main() {
    printf("Main function in file2.c\n\n");
    
    display_info();
    
    hello();
    
    printf("\n");
    int result = calculate_sum(10, 20);
    printf("Result: %d\n", result);
    
    printf("\nProgram completed successfully!\n");
    return 0;
}