#include "main.h"

/**
 * puts2 -prints every other character of a string,
 * starting with the first character
 * @str: character for string
 *
 * return: returns void
 */

void puts2(char *str)
{
	int i, z;

	z = 0;

	while (str[z] != '\0')
	{
		z++;
	}

	for (i = 0; i < z; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
