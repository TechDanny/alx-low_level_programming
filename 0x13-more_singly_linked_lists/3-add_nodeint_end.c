#include "lists.h"

/**
 * add_nodeint_end - adds new at the end of list
 * @head:address of first node
 * @n:data
 *
 * Return:address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp1;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
	temp1 = *head;

	while (temp1->next != NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = ptr;
	}
	return (ptr);
}

