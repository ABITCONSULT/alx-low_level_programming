#include "main.h"

/**
 * rot13 - rotates character by 13 places
 * @p: the array to rotate its character
 * Return: returns p
 */
char *rot13(char *p)
{
	int i, j;
	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (p[i] == x[j])
			{
			p[i] = y[j];
			break;
			}
		}
	}

	return (p);
}
