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
	int i, j;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	j = i - 1;
	_putchar(*s);
}
