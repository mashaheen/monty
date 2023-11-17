#include "monty.h"
/**
 * print_first_node - print first element.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @num: Interger representing the line number of of the opcode.
 */
void print_first_node(stack_t **stack, unsigned int num)
{
if (stack == NULL || *stack == NULL)
error_type2(6, num);
printf("%d\n", (*stack)->n);
}
