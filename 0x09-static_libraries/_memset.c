#include "main.h"

/**
 * _memset - feels memory with constant byte
 * @s:character 1
 * @b:character 2
 * @n:unsigned integer
 *
 * Return: returns the value s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
