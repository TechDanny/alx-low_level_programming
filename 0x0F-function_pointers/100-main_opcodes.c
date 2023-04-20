#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * @argc: number of elements
 * @argv:it is an array
 *
 * Return: always an int
 */

int main(int argc, char *argv[])
{
	int i;
	int nBytes;
	unsigned char *ptr;

	ptr = (unsigned char *)&main;


	i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nBytes = atoi(argv[1]);
	if (nBytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	if (nBytes == 0)
	{
		putchar('\n');
		exit(EXIT_SUCCESS);
	}
	for (; i < nBytes; i++)
	{
		printf("%02x ", *ptr);
		ptr++;

	}

	printf("\n");

	return (0);
}
