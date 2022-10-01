#include "main.h"

/**
 * _strcpy - copies astring from one str to naother dest
 * @src: the original string to copy
 * @dest: the holder to copy to
 * Return:returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int c1, c2 = 0;

	for (c1 = 0; src[c1] != '\0'; c1++)
	{
		dest[c2] = src[c1];
		c2++;
	}
	dest[c2] = '\0';
	return (dest);
}
