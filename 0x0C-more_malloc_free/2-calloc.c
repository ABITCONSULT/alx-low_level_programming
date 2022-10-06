#include "main.h"
#include <stdlib.h>

/**
 * _calloc - creates memory for array
 * @nmemb: number of member of the array
 * @size: size of the data type
 * Return: returns void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	return (p);
}
