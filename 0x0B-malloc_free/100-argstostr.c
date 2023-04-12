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
	int i

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

	for (i = 0; i < ac; i++)
	{
		strcpy(str + position, av[i]);
		position = position + strlen(av[i]);
		str[position++] = '\n';
	}
	return (str);
}
