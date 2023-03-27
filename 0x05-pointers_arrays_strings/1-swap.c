#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: integer one
 * @b: integer two
 *
 * void: returns 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

