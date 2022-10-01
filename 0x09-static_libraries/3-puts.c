#include "main.h"

/**
 * _puts - prints string
 * @str: string to be printed
 * Return: returns void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
