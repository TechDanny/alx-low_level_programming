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
	struct dlistint_s *tmp = malloc(sizeof(struct dlistint_s));

	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
