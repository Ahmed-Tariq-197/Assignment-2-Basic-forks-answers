#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    
    printf("Before fork() - Current PID: %d\n\n", getpid());
    
    pid = fork();
    
    if (pid < 0) {
        fprintf(stderr, "Fork failed!\n");
        return 1;
    }
    else if (pid == 0) {
        printf("[CHILD PROCESS]\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
        printf("fork() returned: %d\n\n", pid);
    }
    else {
        printf("[PARENT PROCESS]\n");
        printf("Parent PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);
        printf("fork() returned: %d\n\n", pid);
        
        wait(NULL);
        printf("Parent: Child process completed\n");
    }
    
    return 0;
}