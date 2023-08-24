#include "monty.h"
int val;
FILE *fd;
/**
 * main - entry function.
 * @argc: number of params.
 * @argv: params.
 * Return: EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		errorNoFile(EXIT_FAILURE);
	_getfile(argv[1]);
	return (EXIT_SUCCESS);
}
/**
 * _getfile - gets and reads the file in givrn opcode.
 * @filename: the name of the file.
 */
void _getfile(char *filename)
{
	int count = 0;
	stack_t *stack = NULL;
	size_t len = 0;
	char opcode[124], *tok, *tmp = NULL, *buff = NULL;
	void (*func)(stack_t **, unsigned int);

	fd = fopen(filename, "r");
	if (!fd)
		errorNoAccFile(EXIT_FAILURE, filename);
	while (getline(&buff, &len, fd) != -1)
	{
		count++;
		if (tmp)
			free(tmp);
		if (buff[0] == '#')
			continue;
		tmp = strdup(buff);
		tok = strtok(tmp, " \t\n");
		if (!tok || tok[0] == '#' || !strcmp(tok, "nop"))
			continue;
		strcpy(opcode, tok);
		func = isopcode(opcode);
		if (!func)
			errorNotIns(EXIT_FAILURE, count, opcode, tmp, buff, stack);
		intVal(count, opcode, stack, tok);
		func(&stack, count);
	}
	fclose(fd);
	free(tmp), free(buff);
	frees_t(stack);
}
/**
 * intVal - check if int value.
 * @count: the line number.
 * @opcode: the operation code.
 * @stack: the stack.
 * @tok: token of string.
 * Return: ...
 */
int intVal(unsigned int count, char *opcode, stack_t *stack, char *tok)
{
	int i = 0;
	char a[124];

	tok = strtok(NULL, " \n\r\t");
	if (strcmp(opcode, "push") == 0)
	{
		if (!tok)
			errorNoInt(EXIT_FAILURE, count, stack);
		strcpy(a, tok);
		while (*tok)
		{
			if (!isdigit(*tok))
			{
				if (i != 0 && *tok != '-')
					errorNoInt(EXIT_FAILURE, count, stack);
			}
			i++;
			tok++;
		}
		val = atoi(a);
	}
	return (EXIT_SUCCESS);
}
/**
 * isopcode - is a opcode.
 * @opc: The opcode.
 * the f function in list instruction_s.
 * Return: ...
 */
void (*isopcode(char *opc))(stack_t **, unsigned int)
{
	unsigned int i = 0;
	instruction_t l_opc[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	while (l_opc[i].f != NULL)
	{
		if (!strcmp(opc, l_opc[i].opcode))
			return (l_opc[i].f);
		i++;
	}
	return (NULL);
}
