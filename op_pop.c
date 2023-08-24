#include "monty.h"
/**
 * op_pop - removes the top element of the stack.
 * @head: head
 * @count: line number
 * Return: nothing
*/
void op_pop(stack_t **head, unsigned int count)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", temp);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
