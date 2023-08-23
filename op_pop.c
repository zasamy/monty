#include "monty.h"
/**
 * f_pop - deletes the top element of the stack.
 * @head: head
 * @counter: the line
 * Return: nothing
*/
void f_pop(stack_t **head, unsigned int count)
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
