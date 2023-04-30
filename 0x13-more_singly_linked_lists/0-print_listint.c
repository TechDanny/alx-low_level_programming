#include "lists.h"

/**
 * print_listint - prints all the element of a list
 * @h:pointer to first node
 *
 * Return:number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const struct listint_s *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
