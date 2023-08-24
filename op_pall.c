#include "monty.h"
/**
 * op_pall - prints all the values on the stack.
 * @head: stack head
 * @count: line number
 * Return: nothing
*/
void op_pall(stack_t **head, unsigned int count)
{
	stack_t *temp;
	(void)count;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
