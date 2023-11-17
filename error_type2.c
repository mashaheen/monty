#include "monty.h"
/**
 * error_type2 - Prints error messages determined by error code.
 * @num: Integer representing the error code.
 */
void error_type2(int num, ...)
{
va_list ag;
char *op;
int l_num;
va_start(ag, num);
switch (num)
{
case 6:
fprintf(stderr, "L%d: can't pint, stack empty\n",
va_arg(ag, int));
break;
case 7:
fprintf(stderr, "L%d: can't pop an empty stack\n",
va_arg(ag, int));
break;
case 8:
l_num = va_arg(ag, unsigned int);
op = va_arg(ag, char *);
fprintf(stderr, "L%d: can't %s, stack too short\n", l_num, op);
break;
case 9:
fprintf(stderr, "L%d: division by zero\n",
va_arg(ag, unsigned int));
break;
default:
break;
}
node_release();
exit(EXIT_FAILURE);
}
