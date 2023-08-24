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
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
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
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
