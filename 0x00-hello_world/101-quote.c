#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <unistd.h>

int main(void) 
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
       	const int len = sizeof(msg) - 1;
	const int ret = 1;
      	write(2, msg, len);
	return ret();
}

