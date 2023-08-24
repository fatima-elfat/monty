#include "monty.h"


/**
 * errorDiv - handles error when can't divide.
 * @r: exit value.
 * @i: ...
*/
void errorDiv(int r, int i)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", i);
	fclose(fd);
	exit(r);
}
/**
 * errorDivZero - handles err when can't divide by zero.
 * @r: exit value.
 * @i: ...
*/
void errorDivZero(int r, int i)
{
	fprintf(stderr, "L%d: division by zero\n", i);
	fclose(fd);
	exit(r);
}