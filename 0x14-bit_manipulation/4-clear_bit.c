#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @n:the value
 * @index:index value
 *
 * Return:1 on success -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~i;
	return (1);
}
