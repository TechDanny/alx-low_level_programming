#include "main.h"
#include<stdlib.h>

/**
 * create_array - creates an array of chars
 * @size:size of array
 * @c:an array
 *
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *pA;
	unsigned int y;

	pA = malloc(size * sizeof(char));
	for (y = 0; y < size; y++)
	{
		pA[y] = c;
	}
	return (pA);
}
