#include "monty.h"

/**
 * file_open - opens a file
 * @file_name: the file namepath
 * Return: void
 */

void file_open(char *file_name)
{
    FILE *fd = fopen(file_name, "r");

    if (file_name == NULL || fd == NULL)
        err(2, file_name);

    file_read(fd);
    fclose(fd);
}