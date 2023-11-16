#include "monty.h"
/**
 * stack_pushh - Adds a node to the stack.
 * @push_node: Pointer to the new node.
 * @len: Interger representing the line number of of the opcode.
 */
void stack_pushh(stack_t **push_node, __attribute__((unused)) unsigned int len)
{
    stack_t *temporary;
    if (push_node == NULL || *push_node == NULL)
        exit(EXIT_FAILURE);
    if (head == NULL)
    {
        head = *push_node;
        return;
    }
    temporary = head;
    head = *push_node;
    head->next = temporary;
    temporary->prev = head;
}
