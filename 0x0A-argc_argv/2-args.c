#include<stdio.h>

/**
 * main - entry point
 * @argc:counts arguments
 * @argv:array of strings
 *
 * Return:always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
