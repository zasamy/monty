#include "monty.h"
/**
 * f_mul - multiplies two elements of stack.
 * @head: head
 * @counter: line
 * Return: nothing
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *a;
	int l = 0, b;

	a = *head;
	while (a)
	{
		a = a->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	b = a->next->n * a->n;
	a->next->n = b;
	*head = a->next;
	free(a);
}
