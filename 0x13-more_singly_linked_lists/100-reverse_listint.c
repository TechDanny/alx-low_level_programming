#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head:address of first node
 *
 * Return:a pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *after;

	before = NULL;
	after = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;
	return (*head);
}

