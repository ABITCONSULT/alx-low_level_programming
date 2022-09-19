#include "main.h"

/**
 * print_rev - to print string reversed
 * @s: the string to print reversed
 * Return: returns void
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)
		for (--index; index >= 0; --index)
			_putchar(s[index]);
	_putchar('\n');
}
