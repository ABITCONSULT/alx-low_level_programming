#include "main.h"

/**
 * _memset - set the buffer memory to be equal b
 * @s: the pointer where the buffer is
 * @b: character to insert to buffer
 * @n: number of buffer to print
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
