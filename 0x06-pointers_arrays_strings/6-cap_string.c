#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * return:returning value
 */

char *cap_string(char *)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr != '\0')
	{
	if (cap_next && islower(*ptr))
	{
	*ptr = toupper(*ptr);
	}
	cap_next = 0;
	if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
	*ptr == ',' || *ptr == ';' || *ptr == '.' ||
	*ptr == '!' || *ptr == '?' || *ptr == '"' ||
	*ptr == '(' || *ptr == ')' || *ptr == '{' ||
	*ptr == '}')
	{
	cap_next = 1;
	}
	ptr++;
	}
	return (str);
}
