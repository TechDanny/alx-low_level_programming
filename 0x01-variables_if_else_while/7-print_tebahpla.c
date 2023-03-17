#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
