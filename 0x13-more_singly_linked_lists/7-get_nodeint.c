#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a linked list.
 * @head: the head of the list
 * @index: the index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
		if (head)
			return (head);
		return (NULL);
}

