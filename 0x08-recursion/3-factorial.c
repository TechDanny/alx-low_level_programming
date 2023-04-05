#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: this is the number
 *
 * Return: always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
