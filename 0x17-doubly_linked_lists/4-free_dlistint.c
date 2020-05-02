#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a dlistint_t list.
 * @head: the head of the list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *help;

	while (head)
	{
		help = head->next;
		free(head);
		head = help;
	}
}
