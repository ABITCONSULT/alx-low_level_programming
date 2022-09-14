#include "main.h"
/**
 * times_table - time_table of 1 to 9
 * @
 * Retuns:returns void
*/
void times_table(void)
{
	int i, j, mult;
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			mult = 'i*j';
			_putchar(mult);
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
