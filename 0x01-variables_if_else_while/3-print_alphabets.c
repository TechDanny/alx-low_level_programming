#include<stdio.h>
/**
 *main - this is the main function
 *
 * Return: always 0 (Success)
 */
int main(void)

{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}

	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}

	putchar('\n');

	return (0);
}
