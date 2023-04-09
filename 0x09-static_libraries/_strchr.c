#include "main.h"
#include<stddef.h>

/**
 * _strchr - locates a character in astring
 * @s:character 1
 * @c:character 2
 *
 * Return: returns c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
