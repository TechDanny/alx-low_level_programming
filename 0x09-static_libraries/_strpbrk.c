#include "main.h"
#include<stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:character 1
 * @accept:character 2
 *
 * Return:returns value
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;



	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
