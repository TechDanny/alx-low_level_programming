#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator:seperates strings
 * @n:number of elements
 *
 * Return:returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list name;
	unsigned int i;
	char *str;

	va_start(name, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(name, char *);
		if (str == 0)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(name);
}
