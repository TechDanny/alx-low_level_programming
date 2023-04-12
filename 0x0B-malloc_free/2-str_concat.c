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
	int i, j, k;
	char *p;

	for (i = 0; s1 && s1[i]; ++i)
		;
	for (j = 0; s2 && s2[j]; ++j)
		;
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	k = 0;
	for (i = 0; s1 && s1[i]; ++i, ++k)
		p[k] = s1[i];
	for (j = 0; s2 && s2[j]; ++j, ++k)
		p[k] = s2[j];
	p[k] = '\0';
	return (p);
}
