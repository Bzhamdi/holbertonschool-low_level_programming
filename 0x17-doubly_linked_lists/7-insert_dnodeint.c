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
	dlistint_t *new, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	current = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	if (current->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current->next->prev = new;
	new->prev = current;
	new->next = current->next;
	current->next = new;
	return (new);
}
