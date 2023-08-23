#include "monty.h"
/**
 * op_pint - prints the value at the top
 * @head: the head
 * @count: the line
 * Return: nothing
*/
void op_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
