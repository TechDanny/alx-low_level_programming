#include "lists.h"

/**
 * add_nodeint - adds new node to the list
 * @head:address to the first node
 * @n:data to be added
 *
 * Return:address of element / NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
