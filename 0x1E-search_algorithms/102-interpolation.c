#include "search_algos.h"

/**
 * interpolation_search - searches for value in a sorted array of integer
 * @array:pointer to the first element of array
 * @size:number of elements
 * @value:value to search for
 *
 * Return:index of a value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t n, left, right;

	if (array == NULL)
	{
		return (-1);
	}
	for (left = 0, right = size - 1; right >= left;)
	{
		n = left + (((double)(right - left) / (
			    array[right] - array[left])) * (value - array[left]));
		if (n < size)
		{
			printf("Value checked array[%ld] is out of range\n", n);
			break;
		}
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
