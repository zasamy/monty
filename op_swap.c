#include "monty.h"
/**
 * op_swap - swaps the top two elements of the stack.
 * @head: double pointer to the head of stack
 * @count: line number
 * Return: nothing
*/
void op_swap(stack_t **head, unsigned int count)
{
	stack_t *temp;
	int l = 0, b;

	b = *head;
	while (temp)
	{
		temp = temp->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	b = temp->n;
	temp->n = temp->next->n;
	temp->next->n = b;
}
