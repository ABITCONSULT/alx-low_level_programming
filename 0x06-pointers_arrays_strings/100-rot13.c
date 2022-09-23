#include "main.h"

/**
 * rot13 - rotates character by 13 places
 * @p: the array to rotate its character
 * Return: returns p
 */
char *rot13(char *p)
{
char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; x[j] != '\0'; j++)
	{
		if (s[i] == x[j])
		{
			s[i] = y[j];
			break;
		}
	}
}

return (s);
}
