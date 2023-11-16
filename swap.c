#include "monty.h"
/**
 * swap - Swaps top two elements of stack.
 * @stack: Pointer to a pointer pointing to top the stack.
 * @num: Interger representing the line number opcode.
 */
void swap(stack_t **stack, unsigned int num)
{
    stack_t *temporary;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        error_type2(8, num, "swap");
    temporary = (*stack)->next;
    (*stack)->next = temporary->next;
    if (temporary->next != NULL)
        temporary->next->prev = *stack;
    temporary->next = *stack;
    (*stack)->prev = temporary;
    temporary->prev = NULL;
    *stack = temporary;
}
