#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function
 * @array:numbers
 * @size:size of array
 * @action:pointer to function
 *
 * Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
