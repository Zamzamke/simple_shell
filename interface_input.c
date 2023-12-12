#include "shell.h"

void interface_input(char *instruction, size_t size) {
    if (fgets(instruction, size, stdin) == NULL) {
        if (feof(stdin)) {
            claudio_print("\n");
            exit(EXIT_SUCCESS);
        } else {
            claudio_print("error");
            exit(EXIT_FAILURE);
        }
    }
    instruction[strcspn(instruction, "\n")] = '\0';
}
