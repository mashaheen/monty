#include "monty.h";

void stack_pushh(stack_t **push_node, __attribute__((unused)) unsigned int lenght)
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
