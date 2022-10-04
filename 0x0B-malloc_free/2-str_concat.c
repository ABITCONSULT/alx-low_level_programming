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
 * str_concat - concatenates two strings with malloc
 * @s1: string 1
 * @s2 string 2
 * RETURN: returns the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k;

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

	for (k = 0; k <= i; k++)
		p[k] = s1[k];

	for (i = 0; s2[i] != '\0'; i++)
	{
		p[k] = s2[i];
		k++;
	}
	p[k] = '\0';

	return (p);
}
