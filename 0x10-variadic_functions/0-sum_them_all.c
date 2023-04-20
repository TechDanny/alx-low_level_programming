#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds parameters
 * @n:number of elements
 *
 * Return:returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int result = 0;

	va_start(nums, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(nums, int);
	}
	va_end(nums);
	return (result);
}

