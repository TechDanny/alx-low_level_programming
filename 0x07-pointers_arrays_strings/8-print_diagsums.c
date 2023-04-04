#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a:integer 1
 * @size:integer 2
 *
 * Return:returns void
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];
		sum2 += a[x * size + (size - x - 1)];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	printf("\n");
}
