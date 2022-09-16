#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints triangle of size n with #
 *
 * Return:returns void
 */
void print_triangle(int size)
{
	int n, n2;

	if (n <= 0)
		putchar('\n');
	else
	{
		n2 = size;
	for (n = 1; n <= size; n++)
	{
		while (n < n2)
		{
			putchar(' ');
			n++;
		}
	putchar(35);
	putchar('\n');
	}
	}
}
