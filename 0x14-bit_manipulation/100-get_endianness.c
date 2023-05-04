#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return:0 if big endian, 1 if small endian
 */

int get_endianness(void)
{
	unsigned int digit;
	char *endianness = (char *)&digit;

	digit = 0;

	if (*endianness)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
