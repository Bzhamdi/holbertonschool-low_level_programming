#include "lists.h"
#include <string.h>
/**
 * add_node - Add a new node.
 *
 * @head: pointer to head of the list.
 * @str: pointer to string.
 *
 * Return: Address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *node;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	if (!str)
	{
		node->str = NULL;
		node->len = 0;
	}
	else
	{
	node->str = strdup(str);
	for (i = 0; node->str[i]; i++)
		;
	node->len = i;
	node->next = *head;
	*head = node;
	}
	return (node);
}
