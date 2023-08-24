#include "monty.h"

/**
 * frees_t- free the list stack_s.
 * @stack: the stack.
 */
void frees_t(stack_t *stack)
{
	stack_t *node = stack;

	while (stack)
	{
		node = stack;
		stack = stack->next;
		free(node);
	}
}