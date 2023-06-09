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
	unsigned int num = 0;

	if (*head == NULL || head == NULL)
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
	back = *head;
	while (num < index - 1 && back->next != NULL)
	{
		back = back->next;
		num++;
	}
	if (back->next == NULL)
	{
		return (-1);
	}

	temp = back->next;
	back->next = temp->next;
	free(temp);


	return (1);
}
