#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: pointer to first element.
 * @n: int.
 *
 *
 * Return: Address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)

	return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = new;
	printf("%d\n", new->n);
	return (new);
}
