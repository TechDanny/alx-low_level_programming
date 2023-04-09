#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest:character 1
 * @src:character 2
 * @n:unsigned int
 *
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
