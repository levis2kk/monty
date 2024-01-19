#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *nwangbe1, *nwangbe2;

	(void) stack;
	(void) line_number;
	if (arguments->stack_length < 2)
		return;

	nwangbe1 = arguments->head;
	nwangbe2 = nwangbe1->next;
	arguments->head = nwangbe2;
	while (nwangbe2)
	{
		if (nwangbe2->next == NULL)
		{
			nwangbe2->next = nwangbe1;
			nwangbe1->next = NULL;
			nwangbe1->prev = nwangbe2;
			break;
		}

		nwangbe2 = nwangbe2->next;
	}
}
