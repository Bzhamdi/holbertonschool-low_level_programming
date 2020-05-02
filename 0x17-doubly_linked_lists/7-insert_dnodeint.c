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

	if (idx == 0)
	{
		return(add_dnodeint(h, n));

	}
	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		i++;
            	current = current->next;
	}
	if (current->next == NULL)
	{

		return(add_dnodeint_end(h, n));
	}
 	new = malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);
        new->n = n;
	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;
	return (new);
}
