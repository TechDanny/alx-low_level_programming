#include "hash_tables.h"

/**
 * key_index - this function gives the key index
 * @key:key of index
 * @size:size of array of hash table
 *
 * Return:index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h;

	h = hash_djb2(key);
	return (h % size);
}
