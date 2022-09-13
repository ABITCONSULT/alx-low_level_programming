#include "main.h"
void print_alphabet(void)
{
	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	putchar('\n');
}
