#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy and overwrite strings
 * @dest: the final copied string
 * @src: the string to copy
 * @n: where array src stops cpying
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (*src != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
