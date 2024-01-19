#include "monty.h"

/**
 * mod - computes the rest of the division of the second top
 * element of the stack by the top element of the stack
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *nwangbe1, *nwangbe2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't mod, stack too short\n", line_number);
		free_args();
		exit(EXIT_FAILURE);
	}

	nwangbe1 = arguments->head;
	nwangbe2 = nwangbe1->next;

	if (nwangbe1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		free_args();
		exit(EXIT_FAILURE);
	}

	nwangbe2->n = nwangbe2->n % nwangbe1->n;
	del_node_stack();

	arguments->stack_length -= 1;
}
