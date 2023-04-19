#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name:character name
 * @f:pointer to function
 * @*:character pointer
 *
 * Return:void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
