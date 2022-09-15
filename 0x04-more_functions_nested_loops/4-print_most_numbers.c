#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print all save 2 & 4
 *
 * Return: returns void
*/
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
		{
		}
		else
			putchar(n);
	}
	putchar('\n');
}
