#include "lists.h"
/**
 * listint_len - the number of elements in a linked list_t.
 *
 * @h: pointer to list.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
int i;

	i = 0;

	while (h)
	{

		h = h->next;
		i++;
	}
	return (i);

}
