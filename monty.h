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
extern int mode_stack;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue).
 * @n: integer.
 * @prev: points to the previous element of the stack (or queue).
 * @next: points to the next element of the stack (or queue).
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO.
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
 * for stack, queues, LIFO, FIFO.
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

/* error01.c*/
void errorNoFile(int r);
void errorNoAccFile(int r, char *filename);
void errorNotIns(int r, int i, char *opc,
char *a, char *b, stack_t *s);
void errorNoInt(int r, int i, stack_t *s);
void errorMalloc(int r, stack_t *s);

/* error02.c*/
void errorPint(int r, int i);
void errorPop(int r, int i);
void errorSwap(int r, int i);
void errorAdd(int r, int i);
void errorSub(int r, int i);

/* error03.c*/
void errorDiv(int r, int i);
void errorDivZero(int r, int i);
void errorMul(int r, int i);
void errorMod(int r, int i);

/* error04.c*/
void errorPchar(int r, int i);
void errorPcharr(int r, int i);

/* opcode01.c*/
void push(stack_t **stack, unsigned int count);
void pall(stack_t **stack, unsigned int count);
void pint(stack_t **stack, unsigned int count);
void pop(stack_t **stack, unsigned int count);
void swap(stack_t **stack, unsigned int count);

/* opcode02.c*/
void add(stack_t **stack, unsigned int count);
void nop(stack_t **stack, unsigned int count);
void sub(stack_t **stack, unsigned int count);
void divv(stack_t **stack, unsigned int count);
void mul(stack_t **stack, unsigned int count);

/* opcode03.c*/
void mod(stack_t **stack, unsigned int count);
void pchar(stack_t **stack, unsigned int count);
void pstr(stack_t **stack, unsigned int count);
void rotl(stack_t **stack, unsigned int count);
void rotr(stack_t **stack, unsigned int count);

/* opcode04.c*/
void stack(stack_t **stack, unsigned int count);
void queue(stack_t **stack, unsigned int count);
#endif
