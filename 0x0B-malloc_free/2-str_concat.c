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
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	j = _strlen(s2);

	p = (char *)malloc((i + j + 1) * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	_strncat(s1, s2);

	_strcpy(p, s1);

	return (p);
}
