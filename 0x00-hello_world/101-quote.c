#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always  (Success)
 */
#include <unistd.h>

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, msg, sizeof(msg) - 1);
	return 1;
}



