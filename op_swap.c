#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack.
 * @head: head
 * @counter: line
 * Return: nothing
*/

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *temp_variable;

	(void)(counter);
	if (!(*head) || !((*head)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	temp_variable = (*head)->next;
	(*head)->prev = (*head)->next;
	(*head)->next = temp_variable->next;
	temp_variable->prev = NULL;
	(*head)->prev = temp_variable;
	if (temp_variable->next)
		temp_variable->next->prev = *head;
	temp_variable->next = *head;
	(*head) = (*head)->prev;
}
