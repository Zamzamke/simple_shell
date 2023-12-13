#include "shell.h"

/**
 * claudio_print - my personalized output function
 * @info: function parameter
 *
 */

void claudio_print(const char *info)
{
	write(STDOUT_FILENO, info, strlen(info));
}

