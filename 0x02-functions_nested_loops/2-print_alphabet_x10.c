#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10times
 *
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
	_putchar('\n');
	i++;
	}
}
