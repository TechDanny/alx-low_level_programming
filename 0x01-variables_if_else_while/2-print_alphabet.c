#include<stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char game = 'a';

	while (game <= 'z')
	{
		putchar(game);
		game++;
	}
	putchar('\n');

	return (0);

}
