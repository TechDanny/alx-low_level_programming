#include<stdio.h>
/*
 * main-Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char charType;
	int zeroType;
	long int oneType;
	long long int twoType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(zeroType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(oneType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(twoType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}

