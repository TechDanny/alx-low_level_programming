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
	int x;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= max - min; x++)
	{
		ptr[x] = min + 1;
	}
	return (ptr);
}

