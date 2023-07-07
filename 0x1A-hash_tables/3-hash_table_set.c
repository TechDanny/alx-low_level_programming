#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht:hash table to be updated
 * @key:is the key
 * @value:is the value associated with the key
 *
 * Return:1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind, n;
	char *new_value;
	hash_node_t *temp;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	for (n = ind; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = new_value;
			return (1);
		}
	}
	temp = malloc(sizeof(hash_table_t));
	if (temp == NULL)
	{
		free(new_value);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = new_value;
	temp->next = ht->array[ind];
	ht->array[ind] = temp;

	return (1);
}
