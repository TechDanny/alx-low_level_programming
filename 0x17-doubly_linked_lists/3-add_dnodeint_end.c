#include "lists.h"

/**
 * add_dnodeint_end - adds node in the end of a list
 * @head:address of the first node
 * @n:data to be in the node
 *
 * Return:address of the last element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *ptr;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
	}
	else
	{
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	}
	ptr->next = tmp;
	tmp->prev = ptr;
	return (tmp);
}
