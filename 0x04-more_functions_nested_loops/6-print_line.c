#include "main.h"
#include <stdio.h>

/**
 * print_line - prints _ in n times
 * @n:number of times _ is printed
 * Return:returns printed lines
 */
void print_line(int n)
{
	int n1 = 1;

	if (n <= 0)
	{
	}
	else
		for (n1 = 1; n1 <= n; n1++)
			putchar(95);
	putchar('\n');
}
