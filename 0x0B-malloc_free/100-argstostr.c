#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates the arguments to function
 * @ac: the number or args
 * @av: the args
 * Return: returns pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (k = j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	p = malloc((k + 1) * sizeof(char));

	if (p = NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = j = l = 0; l < c; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			p[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < (k - 1))
			p[l] = av[i][j];
	}
	p[l] = '\0';
	return (p);
}
