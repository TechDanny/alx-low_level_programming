#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:character 1
 * @accept:character 2
 *
 * Return:number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
	}
	}
		if (accept[y] == '\0')
		{
			return (count);
	}
	}
	return (count);
}
