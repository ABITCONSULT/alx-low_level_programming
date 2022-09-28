#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to print
 * Return: return zero on success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		break;
	else
	{
		_putchar(*s);
		_puts_recursion(s - 1);
	}
}
