#include <stdio.h>
int print_alphabet(int alph)
{
	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return print_alphabet;
}
