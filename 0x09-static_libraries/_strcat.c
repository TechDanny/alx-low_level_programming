#include<stdlib.h>
#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @dest:a character to be returned
 * @src:it is a character
 *
 * Return: returns the value dest
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (result);
}
