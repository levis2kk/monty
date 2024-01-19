#include "monty.h"

/**
 * hash_arguments - Checks the number of command-line arguments.
 * @argc: The number of command-line arguments.
 */

void hash_arguments(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
