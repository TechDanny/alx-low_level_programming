#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * argstostr - concatenates all the
 * arguments of your program
 * @ac:integer value
 * @av:character
 *
 * Return:returns a pointer
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len;
	int position;
	int i;
	int j;

	len = 0;
	position = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = len + strlen(av[i]) + 1;
	}
	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		strcpy(str + position, av[j]);
		position = position + strlen(av[j]);
		str[position++] = '\n';
	}
	return (str);
}
