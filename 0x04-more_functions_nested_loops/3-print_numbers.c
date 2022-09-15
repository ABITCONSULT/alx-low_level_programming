#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 *
 * Return:returns void
 */
void print_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
