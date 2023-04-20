#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator:separates numbers
 * @n:number of elements
 *
 * Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(nums, int);
		printf("%d", result);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(nums);
	printf("\n");
}
