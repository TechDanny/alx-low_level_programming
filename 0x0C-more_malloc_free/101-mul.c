#include<stdio.h>
#include<stdlib.h>
#include "main.h"
#include<string.h>

/**
 * _multi - multiplies numbers
 * @num1:first number
 * @num2:second number
 *
 * Return:multi
 */

int _multi(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_numb - shows number
 * @str:string
 *
 * Return:returns 1
 */
int is_numb(char* str)
{
	int i

	for (i= 0; str[i] != '\0'; i++)
	{
	if (!isdigit(str[i]))
	{
	return (0);
	}
	}
	return (1);
}

/**
 * main - entry point
 * @argc:counts arguments
 * @argv:array
 *
 * Return:returns a pointer
 */

int main(int argc, char* argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3 || !is_numb(argv[1]) || !is_numb(argv[2]))
	{
	_putchar(Error);
	return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multi(num1, num2);
	_putchar(result);
	_putchar('\n');

	return (0);
}
