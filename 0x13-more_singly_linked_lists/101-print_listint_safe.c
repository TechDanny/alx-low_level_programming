#include "lists.h"

/**
 * print_listint_safe - prints a listint-t list
 * @head:stores the address of first node
 *
 * Return:number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *temp, temp1

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp && temp1 && temp1->next)
	{
		temp = temp->next;
		temp1 = temp1->next->next;
		
		printf("[%p] %d\n", *temp, temp->n);
		num++;

		if (temp == temp1)
		{
			printf("[%p] %d\n", *temp->next, temp->next->n);
			num++;
			break;
		}
	}
	return (num);
}


	
