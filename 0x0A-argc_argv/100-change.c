#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * @argc:count arguments
 * @argv:array of strings
 *
 * Return:always 0
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = coins + cents / 25;
	cents = cents % 25;
	coins = coins + cents /10;
	cents = cents % 10;
	coins = coins + cents / 5;
	cents = cents % 5;
	coins = coins + cents / 2;
	cents = cents % 2;
	coins = coins + cents;
	printf("%d\n", coins);
	return (0);
}


