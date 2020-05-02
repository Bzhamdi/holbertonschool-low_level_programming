#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - the sum of all the data (n).
 *
 * @head:head of the list.
 *
 * Return:the sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
