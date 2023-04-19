#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for integer
 * @array:array elements
 * @size:no of elements
 * @cmp:compares values
 *
 * Return:-1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
