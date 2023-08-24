#include "monty.h"
/**
 * errorPchar - handles err when can't pchar.
 * @r: exit value.
 * @i: ...
*/
void errorPchar(int r, int i)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", i);
	fclose(fd);
	exit(r);
}
/**
 * errorPcharr - handles err when can't mod.
 * @r: exit value.
 * @i: ...
*/
void errorPcharr(int r, int i)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", i);
	fclose(fd);
	exit(r);
}
