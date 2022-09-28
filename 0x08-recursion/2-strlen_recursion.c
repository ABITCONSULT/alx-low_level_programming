#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @: the string to know the length recursivelly
 * Return: returns int
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		s++;
		i++;
		_strlen_recursion(s);
	}
	return (i);
}
