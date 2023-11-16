#include "monty.h"
/**
 * node_release - Frees nodes in the stack.
 */
stack_t *node_release(int n)
{
stack_t *node;
node = malloc(sizeof(stack_t));
if (node == NULL)
err(4);
node->next = NULL;
node->prev = NULL;
node->n = n;
return (node);
}
