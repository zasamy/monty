#include "monty.h"
/**
 * op_pop - deletes the top element of the stack.
 * @head: head
 * @count: the line
 * Return: nothing
*/
void op_pop(stack_t **head, unsigned int count)
{
	stack_t *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->next;
	free(i);
}
