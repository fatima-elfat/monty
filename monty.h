#ifndef _MONTY_H_
#define _MONTY_H_
#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>
extern FILE *fd;
extern int val;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue).
 * @n: integer.
 * @prev: points to the previous element of the stack (or queue).
 * @next: points to the next element of the stack (or queue).
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function.
 * @opcode: the opcode.
 * @f: function to handle the opcode.
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project.
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;

/* main.c*/
void _getfile(char *filename);
int intVal(unsigned int count, char *opcode, stack_t *stack, char *tok);
void (*isopcode(char *opc))(stack_t **, unsigned int);

/* free.c*/
void frees_t(stack_t *stack);

/* error.c*/
void errorNoFile(int r);
void errorNoAccFile(int r, char *filename);
void errorNotIns(int r, int i, char *opc,
char *a, char *b, stack_t *s);
void errorNoInt(int r, int i, stack_t *s);
void errorMalloc(int r, stack_t *s);

/* opcode01.c*/
void push(stack_t **stack, unsigned int count);
void pall(stack_t **stack, unsigned int count);


#endif