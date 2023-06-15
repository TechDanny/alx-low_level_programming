#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head:stores address of the first node
 * @index:postion of an element
 *
 * Return: 1 0n sucess -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int n;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = ptr->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(ptr);
		return (1);
	}
	for (n = 0; n < index; n++)
	{
		if (ptr->next == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
	}
	ptr->prev->next = ptr->next;
	if (ptr->next != NULL)
	{
		ptr->next->prev = ptr->prev;
	}
	free(ptr);
	return (1);
}
