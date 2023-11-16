#include "monty.h"
/**
 * print_all - print all stack values.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @num: line number of  the opcode.
 */
void print_all(stack_t **stack, unsigned int num)
{
    stack_t *temporary;
    (void)num;
    if (stack == NULL)
        exit(EXIT_FAILURE);
    temporary = *stack;
    while (temporary != NULL)
    {
        printf("%d\n", temporary->n);
        temporary = temporary->next;
    }
}
