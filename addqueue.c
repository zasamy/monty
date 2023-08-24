#include "monty.h"

/**
 * addqueue - adds node to the tail stack
 * @n: value
 * @head: head
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new, *a;

	a = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		a->next = new;
		new->prev = a;
	}
}
