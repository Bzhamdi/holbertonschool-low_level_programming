#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list_t list.
 * @head: The head of the list.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
	return;
	l = *head;
	while (l)
	{

	free(l);
	l = l->next;

	}
	*head = NULL;

}
