#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * @argc:counts arguments
 * @argv:array of characters
 *
 * Return:always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int y;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	y = atoi(argv[2]);

	mult = i * y;
	printf("%d\n", mult);
	return (0);
}
