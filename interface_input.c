#include "shell.h"

void interface_input(char *instruction, size_t size) {
    if (fgets(instruction, size, stdin) == NULL) {
        if (feof(stdin)) {
            printf("\n");
            exit(EXIT_SUCCESS);
        } else {
            perror("fgets");
            exit(EXIT_FAILURE);
        }
    }
    instruction[strcspn(instruction, "\n")] = '\0';
}
