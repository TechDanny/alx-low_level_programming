#include<stdlib.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:the value to be returned
 * @src:the character
 * @n:value of src
 *
 * Return: returns dust
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (result);
}
