#include "main.h"

/**
 * print_rev - to print string reversed
 * @s: the string to print reversed
 * Return: returns void
 */
void print_rev(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index = index + 1;
		_putchar(index + 48);
		s = s + 1;
	}
	_putchar(index + 48);
		while (index >= 0)
		{
			index--;
		}
	_putchar('\n');
}
