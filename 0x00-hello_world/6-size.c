#include<stdio.h>
int main()
{
	char charType;
	int zeroType;
	long  int oneType;
	long long  int twoType;
	float floatType;
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(zeroType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(oneType));
	printf("Size of a long long int: %llu byte(s)\n", sizeof(twoType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	
	return (0);
}

