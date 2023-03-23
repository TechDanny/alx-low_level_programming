#include "main.h"

/**
 * _isdigit - checks for digit 0 - 9
 * @c: input
 *
 * Return: 1 if it is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c == 0) && (c < 10))
		return (1);
	else
		return (0);
}
