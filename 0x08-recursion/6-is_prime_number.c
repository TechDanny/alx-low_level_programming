#include "main.h"

/**
 * prime - recursively looks for number
 * @n: integer
 * @start:number
 *
 * Return: always 0
 */

int prime(int n, int start)
{
	if (start % n == 0 || start < 2)
	{
		return (0);
	}
	else if (n == start - 1)
	{
		return (-1);
	}
	else if (start > n)
	{
		return (prime(n + 1, start));
	}
	return (1);
}

/**
 * is_prime_number - prime number
 * @n:value
 *
 * Return: always 0
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}
