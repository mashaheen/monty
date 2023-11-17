#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdarg.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
extern stack_t *head = NULL;
typedef void (*op_func)(stack_t **, unsigned int);
void add(stack_t **stack, unsigned int num);
void error_type(int num, ...);
void error_type2(int num, ...);
void file_open(char *file_name);
void file_read(FILE *fd);
void get_function(char *opcode, char *value, int ln);
void line_token(char *buffer, int num);
stack_t *new_node(int n);
void node_release(void);
void nop(stack_t **stack, unsigned int num);
void pop_first(stack_t **stack, unsigned int line_number);
void print_all(stack_t **stack, unsigned int num);
void print_first_node(stack_t **stack, unsigned int num);
void stack_pushh(stack_t **push_node, __attribute__((unused))unsigned int len);
void swap(stack_t **stack, unsigned int num);
void use_function(op_func func, char *op, char *val, int ln);
#endif
