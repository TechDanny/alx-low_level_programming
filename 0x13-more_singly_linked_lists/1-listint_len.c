#include "lists.h"

/**
 * listint_len - returns the number of element in a list
 * @h:address of a node
 * Return:returns the no. of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const struct listint_s *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
