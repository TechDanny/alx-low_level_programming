#include "main.h"

/**
 * leet - encodes a string
 * @s:string
 *
 * Return:returns s
 */

char *leet(char *s)
{
	int x = 0;
	int y;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (s[x] == leet[y] ||
					s[x] - 32 == leet[y])
				s[x] = y + '0';
		}
		x++;
	}
	return (s);
}
