#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers from 0-14
 *
 * Return:returns void
*/
void more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
			putchar((n / 10) + 48);
	putchar((n % 10) + 48);
	}
	putchar('\n');
}
