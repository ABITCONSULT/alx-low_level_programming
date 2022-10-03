#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array ofa given cahr with malloc
 * @size: size of th arry to create
 * @c: the character to fill
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(c) * size);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
