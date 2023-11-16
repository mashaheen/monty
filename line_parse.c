#include "monty.h"
/**
 * line_token - Separates lines into tokens to decide what to call
 * @buffer: line from the file
 * @num: line number
 * Return: void
 */

void line_token(char *buffer, int num)
{
    char *opcode, *value;
    const char *delim = "\n ";

    if (buffer == NULL)
        error_type(4);

    opcode = strtok(buffer, delim);
    value = strtok(NULL, delim);
    get_function(opcode, value, num);
}