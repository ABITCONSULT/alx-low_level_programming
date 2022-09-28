#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to print
 * Return: return zero on success
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
		_putchar('\n');
}
