#include "main.h"

/**
 * _putchar - prints the character of c
 * @c:character to be printed
 *
 * Return:return 1 on success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
