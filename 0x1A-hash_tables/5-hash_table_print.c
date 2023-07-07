#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht:is the hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned char fg = 0;
	unsigned long int n = 0;
	hash_node_t *my_node;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (fg == 1)
			{
				printf(", ");
			}
			my_node = ht->array[n];
			while (my_node != NULL)
			{
				printf("'%s': '%s'", my_node->key, my_node->value);
				my_node = my_node->next;
				if (my_node != NULL)
				{
					printf(", ");
				}
			}
			fg = 1;
		}
	}
	printf("}\n");
}
