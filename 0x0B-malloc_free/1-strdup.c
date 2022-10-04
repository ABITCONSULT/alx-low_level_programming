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
 * _strdup - returns a pointer to the copy of a string in param
 * @str: the given string to copy
 * Return: returns the pointer to the copy of the string
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	i = _strlen(str);

	copy = (char *)malloc((i + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	_strcpy(copy, str);
	return (copy);
}
