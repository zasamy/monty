#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: head
  *@counter: line
  *Return: nothing
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *a = *head, *b;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	b = (*head)->next;
	b->prev = NULL;
	while (a->next != NULL)
	{
		a = a->next;
	}
	a->next = *head;
	(*head)->next = NULL;
	(*head)->prev = a;
	(*head) = b;
}
