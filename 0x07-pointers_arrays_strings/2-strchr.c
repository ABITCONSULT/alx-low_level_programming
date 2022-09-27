#include "main.h"

/**
 * _strchr - search for a character in a string
 * @s: the string to search from
 * @c: the charcter to search for
 * Return: returns s at c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	if (*s == '\0')
		return ('\0');	
}
