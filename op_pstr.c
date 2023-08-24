#include "monty.h"
/**
 * op_pstr - prints the string starting at the top of the stack.
 * @head: head
 * @count: line numebr
 * Return: nothing
*/
void op_pstr(stack_t **head, unsigned int count)
{
	stack_t *temp;
	(void)count;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
