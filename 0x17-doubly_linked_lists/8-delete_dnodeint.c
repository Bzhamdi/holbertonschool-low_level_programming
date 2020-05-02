
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index -deletes node at index of a dlistint_t linked list.
 * @head: the head of list.
 * @index: the index.
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, c = 0;
	dlistint_t *curr = *head;
	dlistint_t *last = *head;

	if (!*head)
		return (-1);
	while (last->next)
	{
		last = last->next;
		c++;
	}
	if (index > c)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next)
			curr->next->prev = NULL;
		free(curr);
		return (1);
	}
	while (i != index)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
		i++;
	}
	curr->prev->next = curr->next;
	if (curr->next)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
