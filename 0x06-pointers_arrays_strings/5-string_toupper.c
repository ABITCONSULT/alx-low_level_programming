#include "main.h"

/**
 * cap_string - changes lower to upper case
 * @p:string to check for lower to upper
 * Return: returns p upper
 */
char *cap_string(char *p)
{
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if ((*(p + i - 1) <= 122 && *(p + i - 1) >= 97) ||  (*(p + i - 1) <= 90 && *(p + i - 1) >= 65))
		{
		}
		else if (*(p + i - 1) <= 57 && *(p + i - 1) >= 48)
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
