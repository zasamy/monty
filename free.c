#include "monty.h"
/**
* free_stack - free a doubly linked list.
* @head: the head
*/
void free_stack(stack_t *head)
{
	stack_t *n;

	n = head;
	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
