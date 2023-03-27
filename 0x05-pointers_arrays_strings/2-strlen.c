#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: character of a string
 *
 * return: returns c
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

