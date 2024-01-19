#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the swap function is called.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *nwangbe1, *nwangbe2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);
		free_args();
		exit(EXIT_FAILURE);
	}

	nwangbe1 = arguments->head;
	nwangbe2 = nwangbe1->next;
	nwangbe1->next = nwangbe2->next;
	if (nwangbe1->next)
		nwangbe1->next->prev = nwangbe1;
	nwangbe2->next = nwangbe1;
	nwangbe1->prev = nwangbe2;
	nwangbe2->prev = NULL;
	arguments->head = nwangbe2;
}
