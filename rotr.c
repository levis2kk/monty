#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *nwangbe, *last;

	(void) stack;
	(void) line_number;
	if (arguments->stack_length < 2)
		return;

	nwangbe = arguments->head;
	while (nwangbe)
	{
		if (nwangbe->next == NULL)
		{
			last = nwangbe;
			break;
		}
		nwangbe = nwangbe->next;
	}

	last->prev->next = NULL;
	last->next = arguments->head;
	last->prev = NULL;

	arguments->head = last;
}
