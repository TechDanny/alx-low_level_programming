#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint
 * @h:pointer
 *
 * Return:number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
