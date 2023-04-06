#include "main.h"

/**
 * find_sqrt - finds the square root
 * @start:starts the number
 * @n:this is the number
 *
 * Return:always 0
 */

int find_sqrt(int n, int start)
{
	if (n * n == start)
	{
		return (n);
	}
		else if (n * n > start)
		{
			return (-1);
		}
		else
		{
			return (find_sqrt(n + 1, start));
		}
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n:this is the integer
 *
 * Return: returns 0
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(1, n));
}
