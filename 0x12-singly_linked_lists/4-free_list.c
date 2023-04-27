#include "lists.h"

/**
 * free_list - frees a list
 * @head:first node
 *
 * Return:void
 */

void free_list(list_t *head)
{
	list_t *clear;

	while (head)
	{
		clear = head->next;
		free(head->str);
		free(head);
		*head = *clear;
	}
}
