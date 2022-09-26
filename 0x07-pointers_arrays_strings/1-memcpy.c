#include "main.h"

/**
 * _memcpy - copies memory from src to dest
 * @src: memory to copy from
 * @dest: mempry to copy to
 * @n: number of memory to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src = dest;
		src++;
		dest++;
	}
	return (dest);
}
