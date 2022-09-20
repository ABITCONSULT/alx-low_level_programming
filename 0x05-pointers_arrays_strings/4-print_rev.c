#include "main.h"

/**
 * print_rev - to print string reversed
 * @s: the string to print reversed
 * Return: returns void
 */
void print_rev(char *s)
{
	int index = 0;
	char rev;

	while (*s != '\0')
	{
		index = index + 1;
		s = s + 1;
	}
	while (index >= 0)
	{
		rev = s[index - 1];
		_putchar(rev);
		index--;
	}
	_putchar('\n');
}
