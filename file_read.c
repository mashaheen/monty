
#include "monty.h"
/**
 * file_read - reads a file
 * @fd: pointer to file descriptor
 * Return: void
 */
void file_read(FILE *fd)
{
    int num;
    char *buffer = NULL;
    size_t len = 0;

    for (num = 1; getline(&buffer, &len, fd) != -1; num++)
    {
        line_parse(buffer, num);
    }
    free(buffer);
}
