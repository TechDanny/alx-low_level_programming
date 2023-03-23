#include "main.h"

/**
 * _isupper - functions thst checks for uppercase
 * @c: input
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))

		return (1);

	else

		return (0);
}
