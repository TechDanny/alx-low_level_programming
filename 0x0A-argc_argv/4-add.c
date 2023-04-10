#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - entry point
 * @argc:count arguments
 * @argv:array of characters
 *
 * Return:always 0
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[x]);
	}
	printf("%d\n", add);
	return (0);
}
