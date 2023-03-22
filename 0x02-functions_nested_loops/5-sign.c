#include "main.h"
/**
 * print_sign - prints the sign of a number
 *@n: character been printed
 *
 * Return: 1 if n>0,0 if n==o, -1 if n<-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
