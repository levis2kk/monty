#include "monty.h"

/**
 * mul - Multiplies the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *nwangbe1, *nwangbe2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);
		free_args();
		exit(EXIT_FAILURE);
	}

	nwangbe1 = arguments->head;
	nwangbe2 = nwangbe1->next;

	nwangbe2->n = nwangbe2->n * nwangbe1->n;
	del_node_stack();

	arguments->stack_length -= 1;
}
