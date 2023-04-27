#include "lists.h"

/**
 * add_node_end - adds new node at the end
 * @head:first node
 * @str:string
 *
 * Return:address or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}
	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = strlen_(add->str);
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = add;
	return (add);
}

/**
 * strlen_ - use to get string length
 * @s:string
 *
 * Return:value
 */

int strlen_(const char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
