#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n:the value
 * @index:is the index
 *
 * Return:the value of a bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (n & i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
