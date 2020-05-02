#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head of the list.
 * @n : int.
 * Return: pointer to the new head of the list
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
