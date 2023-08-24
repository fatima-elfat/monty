#include "monty.h"
int mode_stack;
/**
 * stack - ...
 * @stack: ...
 * @count: ...
 */
void stack(stack_t **stack, unsigned int count)
{
	(void) stack;
	(void) count;

	mode_stack = 1;
}
/**
 * queue - ...
 * @stack: ...
 * @count: ...
 */
void queue(stack_t **stack, unsigned int count)
{
	(void) stack;
	(void) count;

	mode_stack = 0;
}
