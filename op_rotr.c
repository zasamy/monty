#include "monty.h"
/**
  *op_rotr- rotates the stack to the bottom
  *@head: head
  *@count: line number
  *Return: nothing
 */
void op_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *temp;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
