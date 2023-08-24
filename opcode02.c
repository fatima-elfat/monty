#include "monty.h"
/**
  * add - ...
  * @stack: ...
  * @count: ...
  */
 void add(stack_t **stack, unsigned int count)
{
    stack_t *node = NULL;

	if (!*stack || !(*stack)->next)
		errorAdd(EXIT_FAILURE, count);
	node = *stack;
	node->next->n = node->n + node->next->n;
	pop(stack, count);
}