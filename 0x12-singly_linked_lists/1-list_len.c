#include "lists.h"

/**
 * list_len - returns the number of elem
 * @h:pointer to first node
 *
 * Return:number
 */

size_t list_len(const list_t *h);
{
	int node_count;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
