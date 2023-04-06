#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s:character
 *
 * Return: returns value
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * _palindrome_confirm - confirms if string is
 * palindrome
 * @s:charcter
 * @start:beginning of a string
 * @stop:end of a string
 *
 * Return: returns value
 */

int _palindrome_confirm(char *s, int start, int stop)
{
	if (start >= stop)
	{
		return (1);
	}
	if (s[start] == s[stop])
	{
		return (_palindrome_confirm(s, start + 1, stop - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - returns 1 if a string is a
 * palindrome and 0 if not
 * @s:character
 *
 * Return: always a value
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (_palindrome_confirm(s, 0, length - 1));
}
