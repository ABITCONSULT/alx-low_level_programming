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
	int l, i;
	char ch;

	for (l = 0; s[l] != '\0'; ++l)
	{
	}
	for (i = 0; i < l; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];

		s[l - 1 - i] = ch;
		_putchar(ch);
	}
	_putchar('\n');
}
