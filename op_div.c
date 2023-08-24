#include "monty.h"

/**
 * op_div - divides the top two elements of the stack.
 * @head: Pointer to a pointer pointing to top node of the stack.
 * @counter: Interger representing the line number of of the opcode.
 * Return: nothing
 */
void op_div(stack_t **head, unsigned int count)
{
	int temp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head) = (*head)->next;
	temp = (*head)->n / (*head)->prev->n;
	(*head)->n = temp;
	free((*head)->prev);
	(*head)->prev = NULL;
}
