#include "monty.h"
/**
  *op_rotl- rotates the stack to the top
  *@head: head
  *@count: line number
  *Return: nothing
 */
void op_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *temp = *head, *stack;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	stack = (*head)->next;
	stack->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = stack;
}
