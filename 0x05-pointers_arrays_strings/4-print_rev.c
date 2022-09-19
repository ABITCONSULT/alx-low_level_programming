#include "main.h"

/**
 * print_rev - to print string reversed
 * @s: the string to print reversed
 * Return: returns void
 */
void print_rev(char *s)
{
	int count, len;

	count = 0;
	while (*s != '\0')
		count = count + 1;
	while (count > 0)
	{
		len = count - 1;
		_putchar(s[len]);
		count--;
	}
	_putchar('\n');
}
