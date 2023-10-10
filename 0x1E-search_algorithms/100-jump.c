#include "search_algos.h"

/**
 * jump_search - searches for values in a sorted array in integers
 * @array:pointer to the first element of array
 * @size:number of elements
 * @value:value to search
 *
 * Return:index of the value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t n, step, prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	step = sqrt(size);
	for (n = prev = 0; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		n = prev;
		prev += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", n, prev);

	prev = prev < size - 1 ? prev : size - 1;
	for (; n < prev && array[n] < value; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	}
	printf("Value checked array[%ld] = [%d]\n", n, array[n]);

	return (array[n] == value ? (int)n : -1);
}
