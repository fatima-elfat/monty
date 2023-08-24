#include "monty.h"

/**
 * errorNoFile - handles error of no filename inputed.
 * @r: exit value.
*/
void errorNoFile(int r)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(r);
}


/**
 * errorNoAccFile - handles error when file can't open.
 * @r: exit value.
 * @filename: the name of the file to access.
*/
void errorNoAccFile(int r, char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(r);
}
/**
 * errorNotIns - handles error when file contains
 * an invalid instruction.
 * @r: exit value.
 * @i: the line number.
 * @opc: the operation code.
 * @a: ...
 * @b: ...
 * @s: ...
*/
void errorNotIns(int r, int i, char *opc,
char *a, char *b, stack_t *s)
{
	free(a);
	free(b);
	frees_t(s);
	fclose(fd);
	fprintf(stderr, "L%d: unknown instruction %s\n", i, opc);
	exit(r);
}
/**
 * errorNoInt - handles error when value is not int.
 * @r: exit value.
 * @i: the line number.
 * @s: ...
*/
void errorNoInt(int r, int i, stack_t *s)
{
	fprintf(stderr, "L%d: usage: push integer\n", i);
	frees_t(s);
	fclose(fd);
	exit(r);
}
/**
 * errorMalloc - handles error when malloc is failed.
 * @r: exit value.
 * @s: ...
*/
void errorMalloc(int r, stack_t *s)
{
	fprintf(stderr, "Error: malloc failed\n");
	frees_t(s);
	fclose(fd);
	exit(r);
}
