#include "monty.h"
/**
 * node_release - free the node from memory.
 */
void node_release(void)
{
stack_t *tmp;
if (head == NULL)
return;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
