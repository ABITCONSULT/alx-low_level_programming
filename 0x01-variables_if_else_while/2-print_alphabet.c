#include <stdio.h>
/**
 * main - the program run from here
 *
 * Return:return zero if no erro and non zero if error
*/
int main()
{
	int alph;

	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	return (0);
}
