#include "lists.h"

/**
 * free_dlistint - frees memory from a list
 * @head:address to the first node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *tmp;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
