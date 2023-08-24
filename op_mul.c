#include "monty.h"
/**
 * op_mul - multiplies two elements of stack.
 * @head: head
 * @count: line number
 * Return: nothing
*/
void op_mul(stack_t **head, unsigned int count)
{
	stack_t *temp;
	int l = 0, b;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	b = temp->next->n * temp->n;
	temp->next->n = b;
	*head = temp->next;
	free(temp);
}
