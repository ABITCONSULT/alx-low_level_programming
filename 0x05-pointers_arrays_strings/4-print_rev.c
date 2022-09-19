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
	{
		index = index + 0;
	}
		while (index >= 0)
		{
			_putchar(s[index]);
			index--;
		}
	_putchar('\n');
}
