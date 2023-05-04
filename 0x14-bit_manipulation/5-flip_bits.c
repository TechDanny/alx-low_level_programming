#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n:value to flip
 * @m:value 2
 *
 * Return:number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m;
	unsigned long int i = 0;

	for (; i < xr; i++)
	{
		xr = xr & (xr - 1);
	}
	return (i);
}
