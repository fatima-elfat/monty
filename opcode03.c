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