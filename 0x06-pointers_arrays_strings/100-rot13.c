#include "main.h"

/**
 * rot13 - rotates character by 13 places
 * @p: the array to rotate its character
 * Return: returns p
 */
char *rot13(char *p)
{
	while (*p != '\0')
	{
		if ((*p <= 77 && *p >= 65) || (*p <= 109 && *p >= 97))
			*p = *p + 13;
	}
	return (p);
}
