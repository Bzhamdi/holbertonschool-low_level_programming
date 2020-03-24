#include "lists.h"
/**
 * free_listint - frees a list_t list.
 * @head: The head of the list.
 *
 */
void free_listint(listint_t *head)
{

	listint_t *l;

	while (head)
	{
		l = head;

		head = head->next;
		free(l);
	}
}
