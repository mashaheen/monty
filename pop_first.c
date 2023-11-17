#include "monty.h"
/**
 * pop_first - removes the top element of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @num: Interger representing the line number of of the opcode.
 */
void pop_first(stack_t **stack, unsigned int num)
{
stack_t *tmp;
if (stack == NULL || *stack == NULL)
error_type2(7, num);
tmp = *stack;
*stack = tmp->next;
if (*stack != NULL)
(*stack)->prev = NULL;
free(tmp);
}
