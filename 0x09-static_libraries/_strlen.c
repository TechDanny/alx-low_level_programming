#include "main.h"

/**
 * _strlen - length of a string
 * @s: character of string
 *
 * Return: returns 0
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
