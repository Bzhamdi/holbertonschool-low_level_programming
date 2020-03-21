#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: The head of the list.
 *
 */
void free_list(list_t *head)
{
list_t *l;

while (head)
{
l = head;
free(head->str);
head = head->next;
free(l);
}
}
