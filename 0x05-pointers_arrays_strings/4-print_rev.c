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
	char ch;

	i = 0;
	while (*s != '\0')
	{
		ch = *s;
		s[i] = ch;
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
