#include "main.h"
/**
 * times_table - time_table of 1 to 9
 * @
 * Retuns:returns void
*/
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			_putchar(',');
			_putchar(' ');

		if (mult <= 9)
		{
			_putchar((mult % 10) + 48);
			_putchar(' ')
		}
		else
		{
			_putchar((mult / 10) + 48);
			_putchar((mult % 10) + 48);
		}
		}
	_putchar('\n');
	}
}
