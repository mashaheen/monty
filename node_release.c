#include "monty.h"
// create_node
stack_t *node_release(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		error_type(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}
