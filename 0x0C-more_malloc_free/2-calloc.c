#include "main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb:elements
 * @size:bytes
 *
 * Return:pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pcalloc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pcalloc = malloc(nmemb * size);
	if (pcalloc == NULL)
	{
		return (NULL);
	}
	memset(pcalloc, 0, nmemb * size);
	return (pcalloc);
}
