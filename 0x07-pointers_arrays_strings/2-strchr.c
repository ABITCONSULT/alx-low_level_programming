#include "main.h"

/**
 * _strchr - search for a character in a string
 * @s: the string to search from
 * @c: the charcter to search for
 * Return: returns s at c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
