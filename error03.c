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
/**
 * errorMul - handles err when can't mul.
 * @r: exit value.
 * @i: ...
*/
void errorMul(int r, int i)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", i);
	fclose(fd);
	exit(r);
}
/**
 * errorMod - handles err when can't mod.
 * @r: exit value.
 * @i: ...
*/
void errorMod(int r, int i)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", i);
	fclose(fd);
	exit(r);
}