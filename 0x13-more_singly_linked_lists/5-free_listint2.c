#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head:address for first node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head != NULL)
	{

		while (*head != NULL)
		{
			ptr = *head;
			*head = ptr->next;
			free(ptr);
		}
	}
}
