#include "monty.h"
/**
 * use_function - Calls the required function.
 * @func: Pointer to the function that is about to be called.
 * @op: string representing the opcode.
 * @val: string representing a numeric value.
 * @ln: line numeber for the instruction.
 */
void use_function(op_func func, char *op, char *val, int ln)
{
stack_t *node;
int flag;
int i;
flag = 1;
if (strcmp(op, "push") == 0)
{
if (val != NULL && val[0] == '-')
{
val = val + 1;
flag = -1;
}
if (val == NULL)
err(5, ln);
for (i = 0; val[i] != '\0'; i++)
{
if (isdigit(val[i]) == 0)
err(5, ln);
}
node = new_node(atoi(val) * flag);
func(&node, ln);
}
else
func(&head, ln);
}
