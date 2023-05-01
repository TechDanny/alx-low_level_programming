#include "lists.h"

/**
 * sum_listint - returns the sum of all data
 * @address:stores the address of first node
 *
 * Return:sum of all data
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		total = total + ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
