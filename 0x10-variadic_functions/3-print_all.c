#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: number
 *
 */

void print_all(const char * const format, ...)
{
	va_list counts;
	int i = 0;
	char *str;

	va_start(counts, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(counts, int));
			break;
		case 'i':
			printf("%i", va_arg(counts, int));
			break;
		case 'f':
			printf("%f", va_arg(counts, double));
			break;
		case 's':
			str = va_arg(counts, char *);
			printf("%s", str);
			if (str == NULL)
			{
				printf("(nil)");
			}
			break;
		default:
			continue;
		}
	if (format[i])
	printf(",");
	}
printf("\n");
}
