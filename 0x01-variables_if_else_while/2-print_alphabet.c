#include <stdio.h>
/**
 * main - the program run from here
 *
 * Return:return zero if no erro and non zero if error
*/
main()
{
	char alph = 'a';

	while (alph < 'z')
	{
		putchar("%c", alph);
		alph++
	}
		putchar("\n");
	return (0);
}
