#include "main.h"

/**
 * _strncat - concatenates string
 * @dest: the final concat string
 * @src: the string to concat
 * @n: where array src concat
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	src = src - i;
	while (*src != '\0')
	{
		j = 1;
		if (n > i)
			break;
		else
		{
			while (j <= n)
			{
			dest = dest + 1;
			*dest = *src;
			src = src + j;
			j++;
			}
		}
	}
}
