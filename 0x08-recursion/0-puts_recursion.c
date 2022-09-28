#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to print
 * Return: return zero on success
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}
