#include <stdio.h>
/**
 * main - the program run from here
 *
 * Return:return zero if no erro and non zero if error
*/
int main(void)
{
	int alph;

	alph = 'z';
	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
