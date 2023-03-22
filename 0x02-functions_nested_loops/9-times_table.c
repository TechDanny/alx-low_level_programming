#include "main.h"
/**
 * void times_table(void); Prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 10; i++)
	{
		result = 9 * i;
		j = 0;
		while (result > 0)
		{
			int digit = result % 10;
			_putchar(digit + '0');
			result /= 10;
			j++;
		}
		while (j < 4)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\n');
	}
}
