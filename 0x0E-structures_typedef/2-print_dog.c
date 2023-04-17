#include "dog.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_dog - prints struct dog
 * @d:pointer
 *
 * Return:void
 */

void print_dog(struct dog *d)
{
	if (d)
	{

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
