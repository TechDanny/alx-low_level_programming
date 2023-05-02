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
	const listint_t *temp;
	const listint_t *temp1;

	temp = head;
	for (; temp != NULL; num++)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp1 = temp->next;

		if (temp1 > temp)
		{
			printf("-> [%p] %d\n", (void *)temp1, temp1->n);
			break;
		}
		temp = temp1;
	}
	return (num);
}
