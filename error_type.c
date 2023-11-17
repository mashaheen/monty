#include "monty.h"
/**
 * error_type - Prints error messages determined by error code.
 * @num: Integer representing the error code.
 */
void error_type(int num, ...)
{
va_list ag;
char *op;
int l_num;
va_start(ag, num);
switch (num)
{
case 1:
fprintf(stderr, "USAGE: monty file\n");
break;
case 2:
fprintf(stderr, "Error: Can't open file %s\n",
va_arg(ag, char *));
break;
case 3:
l_num = va_arg(ag, int);
op = va_arg(ag, char *);
fprintf(stderr, "L%d: unknown instruction %s\n", l_num, op);
break;
case 4:
fprintf(stderr, "Error: malloc failed\n");
break;
case 5:
fprintf(stderr, "L%d: usage: push integer\n", va_arg(ag, int));
break;
default:
break;
}
node_release();
exit(EXIT_FAILURE);
}
