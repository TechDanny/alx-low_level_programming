#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * array_range - creates array of integer
 * @min:minimum
 * @max:maximu
 *
 * Return:pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; ++i)
	{
		ptr[i - min] = i;
	}
	return (ptr);
}

