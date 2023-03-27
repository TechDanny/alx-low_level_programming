#include "main.h"

/**
 * _puts - prints a string
 * @str: character of a string
 *
 * void: returns 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
