#include "monty.h"
/**
  * push - ...
  * @stack: ...
  * @count: ...
  */
void push(stack_t **stack, unsigned int count)
{
	stack_t *node = NULL;

	node = malloc(sizeof(stack_t));
	if (!node)
		errorMalloc(EXIT_FAILURE, *stack);
	(void) count;
	node->n = val;
	node->next = *stack;
	node->prev = NULL;
	if (*stack)
	{
		node->prev = (*stack)->prev;
		(*stack)->prev = node;
	}
	*stack = node;
}
/**
 * pall - ...
 * @stack: ...
 * @count: ...
 */
void pall(stack_t **stack, unsigned int count)
{
	stack_t *tmp = NULL;

	(void) count;
	if (*stack)
	{
		tmp = *stack;
		while (tmp)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->next;
		}
	}
}
