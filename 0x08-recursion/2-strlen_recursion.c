#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: the string to know the length recursivelly
 * Return: returns int
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
