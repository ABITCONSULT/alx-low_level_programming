#include "main.h"

/**
 * string_toupper - changes all lower case to upper case char
 * @p: character to check for change
 * Return: returns p
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) <= 122 && *(p + i) >= 97)
			*(p + i) = *(p + i) - 32;
		else
		{
		}
	}
	return (p);
}
