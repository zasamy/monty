#include "monty.h"
/**
 * f_div - unction that divides the second top element of the stack by,
 * the top element of the stack.
 * @head: double pointer to the head of stack.
 * @counter: line number
 * Return: nothing
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = temp->next->n / temp->n;
	temp->next->n = b;
	*head = temp->next;
	free(temp);
}
