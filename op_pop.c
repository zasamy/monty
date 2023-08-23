#include "monty.h"
/**
 * f_pop - removes the top element of the stack.
 * @head: head
 * @counter: line
 * Return: nothing
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *a;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	*head = a->next;
	free(a);
}
