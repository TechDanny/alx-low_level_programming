#include "lists.h"

/**
 * add_node - adds new node at the beginning
 * @head:first node
 * @str:string
 *
 * Return:value
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->str = strdup(str);
	add->len = len;
	add->next = *head;
	*head = add;

	return (add);
}
