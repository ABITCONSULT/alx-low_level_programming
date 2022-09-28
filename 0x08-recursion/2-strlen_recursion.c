#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @: the string to know the length recursivelly
 * Return: returns int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + i);
	}
	return (i);
}
