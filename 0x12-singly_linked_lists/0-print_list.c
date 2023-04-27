#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h:points to the first node
 *
 * Return:returns node
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
