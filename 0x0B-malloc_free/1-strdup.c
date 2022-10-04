#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the copy of a string in param
 * @str: the given string to copy
 * Return: returns the pointer to the copy of the string
 */
char *_strdup(char *str)
{
	char *copy;
	int j = 0;
	int i = 0;

	if (STR == NULL)
		return (NULL);
	while (*str != '\0')
	{
		i++;
		str++;
	}

	copy = (char *)malloc((i + 1) * sizeof(str));
	if (copy == NULL)
		return (NULL):

	while (j <= i)
	{
		*(str + j) = *(copy + j);
		j++;
	}

	return (copy);
}
