#include "monty.h"
/**
 * op_swap - swaps the top two elements of the stack.
 * @head: head
 * @count: line number
 * Return: nothing
*/

void op_swap(stack_t **head, unsigned int count)
{
	stack_t *temp;

	(void)(count);
	if (!(*head) || !((*head)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", count);
		exit(EXIT_FAILURE);
	}

	temp = (*head)->next;
	(*head)->prev = (*head)->next;
	(*head)->next = temp->next;
	temp->prev = NULL;
	(*head)->prev = temp;
	if (temp->next)
		temp->next->prev = *head;
	temp->next = *head;
	(*head) = (*head)->prev;
}
