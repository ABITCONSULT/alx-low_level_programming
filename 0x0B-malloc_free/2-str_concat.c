#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - prints the lenght of a string
 * @s:the pointer to the string to print
 * Return:returns int count
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count = count + 1;
		s = (s + 1);
	}
	return (count);
}


/**
 * _strncat - concatenates string
 * @dest: the final concat string
 * @src: the string to concat
 * @n: where array src concat
 * Return: returns dest
 */
char *_strncat(char *dest, char *src)
{
	int j = 0, i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * str_concat - concatenates two strings with malloc
 * @s1: string 1
 * @s2 string 2
 * RETURN: returns the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	i = _strlen(s1);
	j = _strlen(s2);

	p = (char *)malloc((i + j) * sizeof(char));

	_strncat(s1, s2);

	while (*s1 != '\0')
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = '\0';
	return (p);
}
