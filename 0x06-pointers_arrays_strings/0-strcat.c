#include "main.h"

/**
 * _strcat - to concatenate two strings
 * @src: string to copy from
 * @dest: string to copy to
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2 = 0;

	while (*(dest + c1) != '\0')
	{
		c1++;
	}
	while (*(src + c2) != 0)
	{
		*(dest + c1) = *(src + c2);
		c1++;
		c2++;
	}
	*dest = *src;
	return (dest);
}
