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
	node->str = strdup(str);
	if (!str)
		node->str = NULL;
	for (i = 0; node->str[i]; i++)
		;
	node->len = i;
	node->next = *head;
	*head = node;
	return (node);
}
