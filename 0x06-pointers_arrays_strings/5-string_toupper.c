#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @ptr:Character
 *
 * Return: return value
 */

char *string_toupper(char *ptr)
{
	int x = 0;


	while (ptr[x] != '\0')
	{
	if (ptr[x] >= 'a' && ptr[x] <= 'z')
	{
	ptr[x] -= 32;
	}
	x++;
	}
	return (ptr);
}
