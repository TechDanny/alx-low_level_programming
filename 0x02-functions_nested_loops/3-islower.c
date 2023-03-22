#include "main.h"

/**
 *_islower - checks for lowercases
 *@c: The character to be checked
 *
 *Return: return 1 for lowercase return o for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
