#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head:stores the address of the first node
 * @index:index of first node
 *
 * Return:nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr;

	ptr = head;
	for (; count < index; count++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
