#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index.
 * @head: the head of the list.
 * @index: the index of the node to delete
 *
 * Return: 1 if deleted -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *old;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	old = *head;
	if (index == 0)
	{
		delete = (*head)->next;
		free(*head);
		*head = delete;
		return (1);
	}
	while (i < index - 1)
	{
		if (old->next == NULL)
			return (-1);
		i++;
		old = old->next;
	}
	delete = old->next;
	old->next = delete->next;
	free(delete);
	return (1);
}
