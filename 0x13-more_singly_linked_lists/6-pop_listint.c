#include "lists.h"

/**
 * pop_listint - deletes the head note of a list
 * @head:address of first node
 *
 * Return:returns the head node data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *mv;

	if (*head == NULL)
	{
		return (0);
	}
	mv = *head;
	*head = mv->next;
	n = mv->n;
	free(mv);

	return (n);
}
