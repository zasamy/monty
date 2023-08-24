#include "monty.h"
/**
 * op_mod - computes the rest of the division
 * @head: head
 * @count: line number
 * Return: nothing
*/
void op_mod(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = temp->next->n % temp->n;
	temp->next->n = b;
	*head = temp->next;
	free(temp);
}
