#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @ptr: string
 *
 * return:returning value
 */

char *cap_string(char *ptr)
{
	int x = 1;


	while (ptr[x] != '\0')
	{
	if (ptr[x] && islower(*ptr))
	{
	*ptr = toupper(*ptr);
	}
	x = 0;
	if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
	*ptr == ',' || *ptr == ';' || *ptr == '.' ||
	*ptr == '!' || *ptr == '?' || *ptr == '"' ||
	*ptr == '(' || *ptr == ')' || *ptr == '{' ||
	*ptr == '}')
	{
	x = 1;
	}
	ptr++;
	}
	return (str);
}
