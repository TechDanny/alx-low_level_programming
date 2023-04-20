#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * @argc: number of elements
 * @argv:it is an array
 *
 * return: always an int
 */

int main(int argc, char *argv[])
{
	int i;
	int nBytes;

	nBytes = atoi(argv[1]);
	
	i =0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (nBytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (; i < nBytes; i++)
	{
		printf("%02x ", *((unsigned char *) (main + i)));

	}

	printf("\n");

	return 0;
}
