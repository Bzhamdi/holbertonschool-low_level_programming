#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at position.
 * @head: the head of the list
 * @idx: index of new node.
 * @n: value of new node to be inserted.
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *old;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (idx != 0)
	{
		old = *head;
		for (i = 0; i < idx - 1 && old != NULL; i++)
		{
			old = old->next;
			if (old == NULL)
				return (NULL);
		}

	}
	new->next = old->next;
	old->next = new;
	return (new);
}
