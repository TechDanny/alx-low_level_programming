#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at index
 * @head:stores the address of first header
 * @index:position of an element
 *
 * Return: returns 0 if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (ptr != NULL && index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}

