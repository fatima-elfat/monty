#include "monty.h"
/**
  * push - ...
  * @stack: ...
  * @count: ...
  */
void push(stack_t **stack, unsigned int count)
{
	stack_t *node = NULL;

	if (!stack)
		return;
	node = malloc(sizeof(stack_t));
	if (!node)
		errorMalloc(EXIT_FAILURE, *stack);
	(void) count;
	node->n = val;
	node->next = *stack;
	node->prev = NULL;
	if (*stack)
	{
		/*node->prev = (*stack)->prev;*/
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
			fprintf(stdout, "%d\n", tmp->n);
			tmp = tmp->next;
		}
	}
}
#include "monty.h"

/**
 * pint - ...
 * @stack: ...
 * @count: ...
 */
void pint(stack_t **stack, unsigned int count)
{
	(void) count;
	if (*stack == NULL)
		errorPint(EXIT_FAILURE, count);
	printf("%d\n", (*stack)->n);
}