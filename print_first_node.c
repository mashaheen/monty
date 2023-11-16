#include <monty.h>;

void print_first_node(stack_t **stack, unsigned int num)
{
	if (stack == NULL || *stack == NULL)
		error_type2(6, num);
	printf("%d\n", (*stack)->n);
}