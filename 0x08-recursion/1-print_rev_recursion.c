#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print recursively reverse
 * Return: returns void
 */
void _print_rev_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s == '\0')
	_putchar('\n');
}
