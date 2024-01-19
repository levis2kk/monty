#include "monty.h"

/**
 * pall - Prints all the elements in the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *nwangbe;

	if (arguments->head == NULL)
		return;

	(void) line_number;
	(void) stack;

	nwangbe = arguments->head;
	while (nwangbe != NULL)
	{
		printf("%d\n", nwangbe->n);
		nwangbe = nwangbe->next;
	}
}
