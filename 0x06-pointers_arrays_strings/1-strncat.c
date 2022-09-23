#include "main.h"

/**
 * _strncat - concatenates string
 * @dest: the final concat string
 * @src: the string to concat
 * @n: where array src concat
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;

	while (*dest != '\0')
	{
		dest++;
	}
	j = 0;
	while (j < n)
	{
		*dest = *src;
		if (*src == '\0')
		{
			break;
		}
		src = src + 1;
		dest = dest + 1;
		j++;
	}
	return (dest);
}
