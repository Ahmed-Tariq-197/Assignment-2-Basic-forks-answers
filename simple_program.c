#include <stdio.h>

int main() {
    printf("=== Loader Demonstration ===\n\n");
    
    printf("This program demonstrates dynamic loading.\n");
    printf("The printf() function is loaded from libc.so at runtime.\n\n");
    
    printf("Run 'ldd simple_program' to see loaded libraries:\n");
    printf("  - linux-vdso.so.1 (virtual dynamic shared object)\n");
    printf("  - libc.so.6 (C standard library)\n");
    printf("  - ld-linux.so (dynamic linker/loader)\n\n");
    
    printf("The loader's job:\n");
    printf("1. Load executable into memory\n");
    printf("2. Load required shared libraries\n");
    printf("3. Resolve symbols from libraries\n");
    printf("4. Start program execution\n");
    
    return 0;
}