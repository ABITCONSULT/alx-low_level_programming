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

	if (size <= 0)
		putchar('\n');
	else
	{
	for (n = 1; n <= size; n++)
	{
		n2 = 1;
		while (n2 < size)
		{
			if (n2 <= (size - n))
			{
				putchar(' ');
			}
			else
			{
				putchar(35);
			}
		n2++;
		}
	putchar(35);
	putchar('\n');
	}
	}
}
