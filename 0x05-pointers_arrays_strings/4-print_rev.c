#include "main.h"
/**
 *  * rev_string - reverses a string
 *   *
 *    * @s: string parameter input
 *     *
 *      * Return: Nothing
 *      */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	_putchar(i);
}
