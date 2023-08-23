#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head
 * @n: value
 * Return: nothing
*/
void addnode(stack_t **head, int n)
{

	stack_t *new, *a;

	a = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
