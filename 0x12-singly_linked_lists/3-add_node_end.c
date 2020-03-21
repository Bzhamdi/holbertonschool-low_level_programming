#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to first element.
 * @str: pointer to string.
 *
 *
 * Return: Address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	if (!str)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		for (i = 0; str && str[i]; i++)
			;
		new->len = i;
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = new;
	return (new);
}

