#include "main.h"

/**
 * wildcmp - compares 2 strings
 * @s1:string 1
 * @s2:string 2
 *
 * Return: 1 or otherwise 0
 */

int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
