#include <stdio.h>
/**
 * main - the program run from here
 *
 * Return:return zero if no erro and non zero if error
*/
int main()
{
	char alph = 'a';

	while (alph < 'z')
	{
		putchar("%d", alph);
		alph++
	}
		putchar("\n");
	return (0);
}
