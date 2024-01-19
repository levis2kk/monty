#include "monty.h"

/**
 * free_args - Frees all allocated memory for arguments.
 */

void free_args(void)
{
	close_stream();
	release_tokens();
	free_arguments();
}
