#include "monty.h"

/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *nwangbe1;

	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		free_args();
		exit(EXIT_FAILURE);
	}

	nwangbe1 = arguments->head;

	if (nwangbe1->n < 0 || nwangbe1->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		free_args();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", nwangbe1->n);
}
