#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *nwangbe1;

	(void) stack;
	(void) line_number;

	nwangbe1 = arguments->head;

	while (nwangbe1 != NULL)
	{
		if (nwangbe1->n <= 0 || nwangbe1->n > 127)
			break;
		printf("%c", nwangbe1->n);
		nwangbe1 = nwangbe1->next;
	}

	printf("\n");
}
