#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 * str_concat - concatenates between strings
 * @s1:string1
 * @s2:string2
 *
 * Return:returns nill
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}
