#include "monty.h"
/**
  *f_sub- subtracts the top element of the stack
  *@head: head
  *@counter: line
  *Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	int temp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	(*head) = (*head)->next;
	temp = (*head)->n - (*head)->prev->n;
	(*head)->n = temp;
	free((*head)->prev);
	(*head)->prev = NULL;
}
