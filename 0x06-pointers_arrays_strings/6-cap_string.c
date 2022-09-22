#include "main.h"

/**
 * cap_string - changes lower to upper case
 * @p:string to check for lower to upper
 * Return: returns p upper
 */
char *cap_string(char *p)
{
	int i;
	char *j;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		j = p + i - 1;
		if ((*j <= 122 && *j >= 97) ||  (*j <= 90 && *j >= 65))
		{
		}
		else if ((*j <= 57 && *j >= 48) || *j == 45)
		{
		}
		else
		{
			if (*(p + i) <= 122 && *(p + i) >= 97)
				*(p + i) = *(p + i) - 32;
			else
			{
			}
		}
	}
	return (p);
}
