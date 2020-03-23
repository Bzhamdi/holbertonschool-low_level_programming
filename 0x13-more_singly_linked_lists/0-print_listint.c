#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list_t.
 *
 * @h: pointer to list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;

	while (h)
	{
		if (h->n == 0)
		return(0);
		else
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
