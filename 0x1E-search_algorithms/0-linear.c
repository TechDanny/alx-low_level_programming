#include "search_algos.h"

/**
 * linear_search - searches for values in array of integers
 * @array:pointer to the first element fo array
 * @size:number of elements in array
 * @value:value to search for
 * Return:index of the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
