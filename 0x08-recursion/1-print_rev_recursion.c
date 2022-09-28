#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print recursively reverse
 * Return: returns void
 */
void _print_rev_recursion(char *s)
{
	int i = 1;

	if (*(s + i) == '\0')
	{
		_putchar(*s);
		s--;
		i++;
		_print_rev_recurssion(s);
	}
	else if (*s == s[0])
		_putchar('\n');
}
