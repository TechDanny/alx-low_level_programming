#include<stdio.h>
#include<math.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	long long n = 612852475143;
	long long largest_factor = 1;
	long long i;

	while (n % 2 == 0)
	{
	largest_factor = 2;
	n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
	while (n % i == 0)
	{
	largest_factor = i;
	n /= i;
	}
	}

	if (n > 2)
	{
	largest_factor = n;
	}

	printf("%lld\n", largest_factor);

	return (0);
}
