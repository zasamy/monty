#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack.
 * @head: double pointer to the head of stack
 * @counter: line number
 * Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
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
