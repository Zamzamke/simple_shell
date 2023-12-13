#include "shell.h"

/**
 * interface_input - function to receive user input
 * fgets - function to read user input
 * @instruction: function parameter
 * @size: function parameter
 *
 * return :void
 */

void interface_input(char *instruction, size_t size)
{
	if (fgets(instruction, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			claudio_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			claudio_print("error");
			exit(EXIT_FAILURE);
		}
	}
	instruction[strcspn(instruction, "\n")] = '\0';
}
