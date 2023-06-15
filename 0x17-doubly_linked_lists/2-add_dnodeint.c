#include "lists.h"

/**
 * add_dnodeint - adds new node the beginning
 * @head:pointer to the first node
 * @n:data to be added in the node
 *
 * Return:address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
