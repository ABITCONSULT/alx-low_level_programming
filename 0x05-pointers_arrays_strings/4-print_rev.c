#include "main.h"

/**
 * print_rev - to print string reversed
 * @s: the string to print reversed
 * Return: returns void
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	while (count >= 0)
	{
		rev[] = s[count];
		count--;
	}
	while (rev[] != 0)
		_putchar(rev[]);
	_putchar('\n');
}
