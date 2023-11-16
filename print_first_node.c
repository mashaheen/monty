#include<monty.h>;
/**
 * print_first_node - prints the value at the top of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @num: line number of  the opcode.
 */
void print_first_node(stack_t **stack, unsigned int num)
{
if (stack == NULL || *stack == NULL)
more_err(6, num);
printf("%d\n", (*stack)->n);
}
