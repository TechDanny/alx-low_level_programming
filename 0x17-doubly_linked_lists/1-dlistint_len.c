#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h:pointer
 *
 * Return:length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
