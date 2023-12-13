#include "shell.h"

void execute_instruction(const char *instruction) {
    pid_t pid = fork();

    if (pid == -1) {
        claudio_print("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        
        char command_path[200];
        snprintf(command_path, sizeof(command_path), "/bin/%s", instruction);

        char *args[] = {instruction, NULL};
        execve(command_path, args, NULL);

        claudio_print("execve");
        exit(EXIT_FAILURE);
    } else {
       
        wait(NULL);
    }
}

