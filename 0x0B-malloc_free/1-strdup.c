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

	while (*str != '\0')
		i++;

	copy = malloc(typeof(str) * (i + 1));
	while (i <= j)
		str[i] = copy[j];

	return (copy);
}
