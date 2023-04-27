#include <stdio.h>


void __attribute__ ((constructor)) one(void);

/**
 * one - prints before main function
 *
 */

void one(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
