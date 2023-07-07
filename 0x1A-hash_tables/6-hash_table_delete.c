#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht:hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *ptr;
	hash_node_t *my_node;
	hash_node_t *temp;
	unsigned long int n = 0;

	ptr = ht;
	for (; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			my_node = ht->array[n];
			while (my_node != NULL)
			{
				temp = my_node->next;
				free(my_node->key);
				free(my_node->value);
				free(my_node);
				my_node = temp;
			}
		}
	}
	free(ptr->array);
	free(ptr);
}
