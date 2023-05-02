#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head:address of first node
 * @index:index of node deleted
 *
 * Return:1(success) -1(fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *back;
	unsigned int num;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (num < index && temp != NULL)
	{
		back = temp;
		temp = temp->next;
		num++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	else
	{
		back->next = temp->next;
		free(temp);
	}

	return (1);
}


