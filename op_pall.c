#include "monty.h"
/**
 * f_pall - prints all the values on the stack.
 * @head: stack head
 * @counter: counter
 * Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *a;
	(void)counter;

	a = *head;
	if (a == NULL)
		return;
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}
