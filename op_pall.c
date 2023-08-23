#include "monty.h"
/**
 * f_pall - prints all the values on the stack.
 * @head: stack head
 * @counter: counter
 * Return: nothing
*/
void op_pall(stack_t **head, unsigned int count)
{
	stack_t *i;
	(void)count;
	i = *head;
	if (i == NULL)
		return;
	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
	}
}
