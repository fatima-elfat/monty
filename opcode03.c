#include "monty.h"
/**
 * mod - ...
 * @stack: ...
 * @count: ...
 */
void mod(stack_t **stack, unsigned int count)
{
	stack_t *node = NULL;

	if (!*stack || !(*stack)->next)
		errorMod(EXIT_FAILURE, count);
	if (!(*stack)->n)
		errorDivZero(EXIT_FAILURE, count);
	node = *stack;
	node->next->n = node->next->n % node->n;
	pop(stack, count);
}

/**
 * pchar - ...
 * @stack: ...
 * @count: ...
 */
void pchar(stack_t **stack, unsigned int count)
{
	if (*stack == NULL)
		errorPchar(EXIT_FAILURE, count);
	if ((*stack)->n < 0 || (*stack)->n > 127)
		errorPcharr(EXIT_FAILURE, count);
	fprintf(stdout, "%c\n", (*stack)->n);
}
/**
 * pstr - ...
 * @stack: ...
 * @count: ...
 */
void pstr(stack_t **stack, unsigned int count)
{
	stack_t *node = NULL;

	(void) count;
	node = *stack;
	while (node && node->next)
	{
		if (!node->n)
			break;
		if (node->n < 0 || node->n > 127)
			break;
		fprintf(stdout, "%c", node->n);
		node = node->next;
	}
	fprintf(stdout, "\n");
}
/**
 * rotl - ...
 * @stack: ...
 * @count: ...
 */
void rotl(stack_t **stack, unsigned int count)
{
	stack_t *node = NULL;

	(void) count;
	if (!*stack || !(*stack)->next)
		return;
	node = *stack;
	while (node->next)
		node = node->next;
	(*stack)->prev = node;
	node->next = *stack;
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	node->next->next = NULL;
}