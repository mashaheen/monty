#include "monty.h"
/**
 * add - Adds top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @num: Interger representing the line number of of the opcode.
 */
void add(stack_t **stack, unsigned int num)
{
int sum;
if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
error_type(8, num, "add");
(*stack) = (*stack)->next;
sum = (*stack)->n + (*stack)->prev->n;
(*stack)->n = sum;
free((*stack)->prev);
(*stack)->prev = NULL;
}
