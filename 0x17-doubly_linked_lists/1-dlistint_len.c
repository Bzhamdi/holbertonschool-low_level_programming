#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len -returns the number of elements in a linked dlistint_t list .
 * @h: first head of the list
 * Return: count nodes.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nbr = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nbr++;
		h = h->next;
	}
	return (nbr);
}

