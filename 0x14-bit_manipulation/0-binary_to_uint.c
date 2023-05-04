#include "main.h"

/**
 * binary_to_uint - converts binary to number
 * @b:pointer to a string
 *
 * Return:converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int count = 0;

	if (b[count] == '\0')
	{
		return (0);
	}

	for (; b[count] != '\0'; count++)
	{
		if (b[count] == '0')
		{
			value = value << 1;
		}
		else if (b[count] == '1')
		{
			value = value << 1;
			value = value | 1;
		}
		else
		{
			return (0);
		}
	}
	return (value);
}
