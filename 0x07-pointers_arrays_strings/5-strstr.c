#include "main.h"
#include<stddef.h>
#include<string.h>

/**
 * _strstr -  locates a substring
 * @haystack:character 1
 * @needle:character 2
 *
 * Return:returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);
	int x;
	int y;

	for (x = 0; x <= haystack_len - needle_len; x++)
	{
	for (y = 0; y < needle_len; y++)
	{
	if (haystack[x + y] != needle[y])
	{
	break;
	}
	}
	if (y == needle_len)
	{
	return (&haystack[x]);
	}
	}
	return (NULL);
}
