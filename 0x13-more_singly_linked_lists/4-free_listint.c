#include "lists.h"

/**
 * free_listint - frees a list
 * @head:address to first node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
