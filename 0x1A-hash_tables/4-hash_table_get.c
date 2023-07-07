#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht:hash table to be looked in
 * @key:key values to be searched
 *
 * Return:value associated with element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *my_node;
	unsigned long int ind;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	ind = key_index((const unsigned char *)key, ht->size);
	my_node = ht->array[ind];
	while (my_node)
	{
		if (strcmp(my_node->key, key) == 0)
			return (my_node->value);
		my_node = my_node->next;
	}
	return (NULL);
}
