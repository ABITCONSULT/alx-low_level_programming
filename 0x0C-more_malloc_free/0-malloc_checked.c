#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - cretaes memory with malloc
 * @b: size of memory to create
 * Return: returns void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);

	return (p);
}
