#include "main.h"

/**
 * puts_half - prints a string to half
 * @str: string to print to half
 * Return: returns void
 */
void puts_half(char *str)
{
	int c1, c2;

	for (c1 = 0; str[c1] != 0; c1++)
	{
	}
	if (c1 % 2 == 0)
	{
	c2 = c1 / 2;
	}
	else
	{
		c2 = ((c1 - 1) / 2 + 1);
	}
	str = str + c2;

	while (c2 < c1)
	{
		_putchar(*str);
		str = str + 1;
		c2++;
	}
	_putchar('\n');
}
