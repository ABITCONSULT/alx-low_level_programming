#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers from 0-14
 *
 * Return:returns void
*/
void more_numbers(void)
{
	int n, n1;

	for (n1 = 1; n1 <= 10; n1++)
	{
	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
			putchar((n / 10) + 48);
	putchar((n % 10) + 48);
	}
	putchar('\n');
	}
}
