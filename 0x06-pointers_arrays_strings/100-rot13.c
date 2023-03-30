#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s:this is the string
 *
 * Return: returning string rotated
 */

char *rot13(char *s)
{
	int i;
	char rot1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot2[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				rot2[s[i] - 97] : rot1[s[i] - 65];
		}
	}
	return (s);
}
