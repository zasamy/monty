#include "monty.h"
/**
  *f_sub- subtracts the top element of the stack from the,
  *second top element of the stack.
  *@head: double pointer to the head of stack.
  *@counter: line number
  *Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int c, i;

	temp = *head;
	for (i = 0; temp != NULL; i++)
		temp  = temp->next;
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	c = temp->next->n - temp->n;
	temp->next->n = c;
	*head = temp->next;
	free(temp);
}
