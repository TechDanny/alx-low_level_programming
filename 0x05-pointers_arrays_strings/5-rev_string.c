#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character of a string
 *
 * Return: returns void
 */

void rev_string(char *s)
{
	char rev;
	int i, y, z;

	y = 0;
	z = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	z = y - 1;

	for (i = 0; i < y / 2; i++)
	{
		rev = s[i];
		s[i] = s[z];
		s[z--] = rev;
	}
}
