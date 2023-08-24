#include "monty.h"
/**
  *f_sub- subtracts the top element of the stack
  *@head: head
  *@counter: line
  *Return: nothing
 */
void _sub(stack_t **head, unsigned int counter)
{
	int temp_variable;

	if (!(*head) || !(*head)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	temp_variable = (*head)->n;
	f_pop(head, counter);
	(*head)->n -= temp_variable;
}
