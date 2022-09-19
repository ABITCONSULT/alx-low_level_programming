#include "main.h"

/**
 * print_rev - to print string reversed
 * @s: the string to print reversed
 * Return: returns void
 */
void print_rev(char *s)
{
	int index;
	char rev[index];

	index = 0;
	while (*s != '\0')
	{
		rev[index] = *s;
		index++;
		s = s + 1;
	}
		while (index >= 0)
		{
			_putchar(rev[index]);
			index--;
		}
	_putchar('\n');
}
