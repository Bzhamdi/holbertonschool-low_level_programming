#include "lists.h"
#include <string.h>
/**
 * add_nodeint - Add a new node.
 *
 * @head: pointer to head of the list.
 * @n: int..
 *
 * Return: Address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);


	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);


}
