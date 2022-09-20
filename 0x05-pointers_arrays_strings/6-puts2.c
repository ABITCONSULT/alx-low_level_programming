#include "main.h"

/**
 * puts2 - to print every other string
 * @str: the stringto print
 * Return: returns void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str != '.')
		{
		_putchar(*str);
		str = str + 2;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
