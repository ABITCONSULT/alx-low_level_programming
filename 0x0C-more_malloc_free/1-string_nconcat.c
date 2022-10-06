#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings s1 and s2 partial
 * @s1: the first sting to be full
 * @s2: the second string to copy to n
 * @n: where to stop concat of s2
 * Return: the pointer to the concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s1);
	j = strlen(s2);

	if (j <= n)
		p = (char *)malloc(sizeof(char) * (i + j + 1));
	else
		p = (char *)malloc(sizeof(char) * (i + n + 1));
	
	if (p == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		p[k] = s1[k];

	for (l = 0; l <= n; l++, k++)
		p[k] = s2[l];

	p[k] = '\0';

	return (p);
}
