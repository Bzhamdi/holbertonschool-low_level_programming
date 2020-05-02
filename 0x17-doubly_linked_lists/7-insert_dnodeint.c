#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - nserts a new node at a given position.
 *
 * @h:the head of the list
 * @idx: index .
 * @n: data of the new node
 *
 * Return: new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *last, *current;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		add_dnodeint(h, n);

	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	last = *h;
	while (last->next)
		last = last->next;
	current = *h;
	while ((i < idx - 1) && (current))
	{
		current = current->next;
		i++;
	}
	if (current == last)
	{
		add_dnodeint_end(h, n);

	}
	else
	{
		new->next = current->next;
		new->prev = current;
		if (current->next)
			current->next->prev = new;
		current->next = new;
		return (new);
	}
	return (NULL);
}
