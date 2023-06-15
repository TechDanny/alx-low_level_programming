#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a list
 * @head:stores the address of the first node
 *
 * Return: 0 on success
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int total;

	total = 0;
	while (ptr != NULL)
	{
		total += ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
