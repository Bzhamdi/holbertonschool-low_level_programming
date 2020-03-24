#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head node and return his data.
 * @head: pointer.
 * Return: data of the node deleted.
 */

int pop_listint(listint_t **head)
{
	listint_t *l;
	int n;

	l = *head;
	if (*head == NULL)
		return (0);
	if (*head != NULL)
	{
		n = l->n;
		*head = l->next;
		free(l);
		return (n);
	}
	return (0);
}
