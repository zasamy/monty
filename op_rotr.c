#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: head
  *@counter: line
  *Return: nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *a;

	a = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (a->next)
	{
		a = a->next;
	}
        a->next = *head;
	a->prev->next = NULL;
	a->prev = NULL;
	(*head)->prev = a;
	(*head) = a;
}
