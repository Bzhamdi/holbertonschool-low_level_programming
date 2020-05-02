#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the list.
 * @n: int.
 * Return: new node.
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
