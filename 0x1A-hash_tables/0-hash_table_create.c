#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size:size of array
 *
 * Return:pointer to new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;
	unsigned long int n = 0;

	tb = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (tb == NULL)
	{
		return (NULL);
	}
	tb->size = size;
	tb->array = malloc(sizeof(hash_table_t *) * size);
	if (tb->array == NULL)
	{
		free(tb);
		return (NULL);
	}
	for (; n < size; n++)
		tb->array[n] = NULL;
	return (tb);
}
