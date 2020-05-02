#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: head of the list
 * @index: the index of node to return.
 * Return: node.
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
