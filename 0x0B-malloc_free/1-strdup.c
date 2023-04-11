#include "main.h"
#include<stdlib.h>

/**
 * _strdup - contains a copy of string
 * @str:string
 *
 * Return:returns a pointer
 */

char *_strdup(char *str)
{
	char *pstr;
	int count;
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	pstr = malloc(sizeof(char) * (len + 1));
	if (pstr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < len; count++)
	{
		pstr[count] = str[count];
	}
	pstr[count] = '\0';
	return (pstr);
}

