#include "main.h"

/**
 * _strlen - prints the lenght of a string
 * @s the pointer to the string to print
 * Return:returns int count
 */
int _strlen(char *s)
{
	int count;
	
	count = 0;
	while (*s != '\0')
	{
		count = count + 1;
		*s = *(*s + 1);
	}
	return (count);
}
