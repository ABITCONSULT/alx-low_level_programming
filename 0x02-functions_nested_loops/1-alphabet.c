#include "main.h"
/*
 * print_alphabet function
*/
void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	putchar('\n');
}
