#include "main.h"
/**
 * print_alphabet - function to print alphabet
 *
 * Return:returns void on sucess
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
