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
/**
 * nop - ...
 * @stack: ...
 * @count: ...
 */
void nop(stack_t **stack, unsigned int count)
{
	(void) count;
	if (!*stack)
		return;
}

/**
 * sub - ...
 * @stack: ...
 * @count: ...
 */
void sub(stack_t **stack, unsigned int count)
{
	stack_t *node = NULL;

	if (!*stack || !(*stack)->next)
		errorSub(EXIT_FAILURE, count);
	node = *stack;
	node->next->n =  node->next->n - node->n;
	pop(stack, count);
}
/**
 * div - ...
 * @stack: ...
 * @count: ...
 */
void div(stack_t **stack, unsigned int count)
{
	stack_t *node = NULL;

	if (!*stack || !(*stack)->next)
		errorDiv(EXIT_FAILURE, count);
	if (!(*stack)->n)
		errorDivZero(EXIT_FAILURE, count);
	node = *stack;
	node->next->n = node->next->n / node->n;
	pop(stack, count);
}
/**
 * mul - ...
 * @stack: ...
 * @count: ...
 */
void mul(stack_t **stack, unsigned int count)
{
	stack_t *node = NULL;

	if (!*stack || !(*stack)->next)
		errorMul(EXIT_FAILURE, count);
	node = *stack;
	pop(stack, count);
	node->next->n = node->next->n * node->n;
}
