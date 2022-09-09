#include <stdio.h>
/**
 * main - the program run from here
 *
 * Return:return zero if no erro and non zero if error
*/
int main(void)
{
	int alph, ALPH;

	alph = 'a';
	ALPH = 'A';
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
		putchar('\n');
	return (0);
}
