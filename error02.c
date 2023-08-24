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
