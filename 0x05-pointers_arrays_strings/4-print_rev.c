#include "main.h"

/**
 * print_rev - to print string reversed
 * @s: the string to print reversed
 * Return: returns void
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');
}
