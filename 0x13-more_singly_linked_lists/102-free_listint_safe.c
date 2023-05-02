#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h:stores address
 *
 * Return:size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	int count = 0;
	listint_t *temp;
	listint_t *next;
	
	if (*h == NULL)
	{
		return (0);
	}
	temp = *h;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		count++;
		temp = next;
		if (temp == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
