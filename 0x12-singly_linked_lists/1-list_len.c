#include "lists.h"

/**
 * list_len - returns the number of elem
 * @h:pointer to first node
 *
 * Return:number
 */

size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
