#include "monty.h"
/**
* execute - runs the code
* @stack: head linked list - stack
* @counter: counter
* @file: pointer
* @content: line
* Return: nothing
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", op_push}, {"pall", op_pall}, {"pint", op_pint},
				{"pop", op_pop},
				{"swap", op_swap},
				{"add", op_add},
				{"nop", op_nop},
				{"sub", op_sub},
				{"div", op_div},
				{"mul", op_mul},
				{"mod", op_mod},
				{"pchar", op_pchar},
				{"pstr", op_pstr},
				{"rotl", op_rotl},
				{"rotr", op_rotr},
				{"queue", op_queue},
				{"stack", op_stack},
				{NULL, NULL}
				};
	unsigned int a = 0;
	char *b;

	b = strtok(content, " \n\t");
	if (b && b[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[a].opcode && b)
	{
		if (strcmp(b, opst[a].opcode) == 0)
		{	opst[a].f(stack, counter);
			return (0);
		}
		a++;
	}
	if (b && opst[a].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, b);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
