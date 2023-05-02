#include "lists.h"

/**
 * find_listint_loop - finds the loop of linked list
 * @head:stores the the address of first node
 *
 * Return:returns the address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = head;
	temp2 = head;
	while (temp1 && temp2 && temp2->next)
	{
		temp1 = temp1->next;
		temp2 = temp2->next->next;

		if (temp1 == temp2)
		{
			while (temp1 != temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			return (temp1->next);
		}
	}
	return (NULL);
}

