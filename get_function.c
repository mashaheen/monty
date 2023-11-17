#include "monty.h"
/**
 * get_function - find the target function
 * @opcode: opcode
 * @value: argument of opcode
 * @ln: line number
 * Return: void
 */
void get_function(char *opcode, char *value, int ln)
{
int i;
int flag;
instruction_t functions[] = {
{"push", stack_pushh},
{"pall", print_all},
{"pint", print_first_node},
{"pop", pop_first},
{"nop", nop},
{"swap", swap},
{"add", add},
{NULL, NULL}};
if (opcode[0] == '#')
return;
for (flag = 1, i = 0; functions[i].opcode != NULL; i++)
{
if (strcmp(opcode, functions[i].opcode) == 0)
{
use_function(functions[i].f, opcode, value, ln);
flag = 0;
}
}
if (flag == 1)
error_type(3, ln, opcode);
}
