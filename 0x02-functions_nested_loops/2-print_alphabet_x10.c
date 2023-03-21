#include "main.h"

/**
 *print_alphabet_x10 - Make alphabet x10 times
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
	}
}
