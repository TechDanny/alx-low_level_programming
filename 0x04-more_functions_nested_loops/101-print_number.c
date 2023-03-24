#include"main.h"

/**
 * print_number - prints an integer
 * @n: charcter to be printed
 *
 * return: n to be returned
 */

void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}

	int divisor = 1;

	while (divisor <= n / 10)
	{
	divisor *= 10;
	}

	while (divisor > 0)
	{
	_putchar((n / divisor) % 10 + '0');
	divisor /= 10;
	}
}
