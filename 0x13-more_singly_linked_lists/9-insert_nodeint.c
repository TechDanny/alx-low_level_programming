#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at any position
 * @head:stores the address of first node
 * @idx:index
 * @n:data
 *
 * Return:adress of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newest, *temp;
	unsigned int num;

	if (*head == NULL)
	{
		return (NULL);
	}
	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
	{
		return (NULL);
	}
	newest->n = n;
	if (idx == 0)
	{
		newest->next = *head;
		*head = newest;
		return (newest);
	}
	temp = *head;
	for (num = 0; num < idx - 1; num++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
	{
		free(newest);
		return (NULL);
	}
	newest->n = n;
	newest->next = temp->next;
	temp->next = newest;
	return (newest);
}
