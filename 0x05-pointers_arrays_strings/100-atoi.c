#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: this is the string
 *
 * Return: returns 0
 */

int _atoi(char *s)
{
	int sign = 1, res = 0, i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
	sign *= -1;

	if (s[i] >= '0' && s[i] <= '9')
		res = res * 10 + s[i] - '0';

	if (res != 0 && !(s[i] >= '0' && s[i] <= '9'))
	break;

	i++;
	}

	return (res * sign);
}
