#include "search_algos.h"

/**
 * binary_search - search for values in sorted array of integers
 * @array:pointer to the first element of array
 * @size:number of elements
 * @value:value to search
 *
 * Return:index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right, left, n;

	if (array == NULL)
	{
		return (-1);
	}
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (n = left; n < right; n++)
		{
			printf("%d, ", array[n]);
		}
		printf("%d\n", array[n]);

		n = left + (right - left) / 2;
		if (array[n] == value)
		{
			return (n);
		}
		if (array[n] > value)
		{
			right = n - 1;
		}
		else
		{
			left = n + 1;
		}
	}
	return (-1);
}
