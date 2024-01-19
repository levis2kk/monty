#include "monty.h"

/**
* del_node_stack - delete node at the head/top
* Return: void
*/
void del_node_stack(void)
{
	stack_t *nwangbe;

	nwangbe = arguments->head;
	arguments->head = nwangbe->next;
	free(nwangbe);
}
