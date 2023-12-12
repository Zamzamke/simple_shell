#include "simple_shell.h"

void claudio_print(const char *info) {
    write(STDOUT_FILENO, info, strlen(info));
}

