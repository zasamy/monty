#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack.
 * @head: head
 * @counter: line
 * Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *a;
	int l = 0, b;

	b = *head;
	while (a)
	{
		a = a->next;
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
	a = *head;
	b = a->n;
	a->n = a->next->n;
	a->next->n = b;
}
