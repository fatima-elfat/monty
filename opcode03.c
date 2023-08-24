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
	if ((*stack)->n < 32 || (*stack)->n > 127)
		errorPcharr(EXIT_FAILURE, count);
	fprintf(stdout, "%c\n", (*stack)->n);
}
