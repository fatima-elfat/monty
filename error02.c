#include "monty.h"

/**
 * errorPint - handles error when can't pint.
 * @r: exit value.
 * @i: ...
*/
void errorPint(int r, int i)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", i);
	fclose(fd);
	exit(r);
}
/**
 * errorPop - handles error when can't pop.
 * @r: exit value.
 * @i: ...
*/
void errorPop(int r, int i)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", i);
	fclose(fd);
	exit(r);
}

/**
 * errorSwap - handles error when can't swap.
 * @r: exit value.
 * @i: ...
*/
void errorSwap(int r, int i)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", i);
	fclose(fd);
	exit(r);
}
/**
 * errorAdd - handles error when can't swap.
 * @r: exit value.
 * @i: ...
*/
void errorAdd(int r, int i)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", i);
	fclose(fd);
	exit(r);
}