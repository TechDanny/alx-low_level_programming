#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _realloc - reallocates a memory
 * @ptr:pointer
 * @old_size:old memory
 * @new_size:new memory
 *
 * Return:returns a pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	old_ptr = ptr;
	for (i = 0; i < new_size && i < old_size; ++i)
	{
		new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
