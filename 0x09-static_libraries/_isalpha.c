#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c:the character to be checked
 *
 * Return: return 1 for true or zero for false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
