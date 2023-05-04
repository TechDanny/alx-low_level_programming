#include "main.h"

/**
 * set_bit - sets a value of a bit to 1
 * @n:value
 * @index:index value
 *
 * Return:1 on success -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= i;
	return (1);
}
