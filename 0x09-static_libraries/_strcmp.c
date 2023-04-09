#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1:string 1
 * @s2:string 2
 *
 * Return: the value to be returned
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
