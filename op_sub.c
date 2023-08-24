#include "monty.h"
/**
  *op_sub- subtracts the top element of the stack
  *@head: head
  *@count: line
  *Return: nothing
 */
void op_sub(stack_t **head, unsigned int count)
{
	int temp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", count);
		exit(EXIT_FAILURE);
	}
	(*head) = (*head)->next;
	temp = (*head)->n - (*head)->prev->n;
	(*head)->n = temp;
	free((*head)->prev);
	(*head)->prev = NULL;
}
