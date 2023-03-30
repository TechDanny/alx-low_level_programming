#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a:these are the integers
 * @n:numbers of members
 *
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
	int rev = a[i];

	a[i] = a[j];
	a[j] = rev;
	}
}
