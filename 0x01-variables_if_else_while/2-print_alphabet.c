#include <stdio.h>
/**
 * main - the program run from here
 *
 * Return:return zero if no erro and non zero if error
*/
int main()
{
	void pr_int(int alph)

	alph = 'a';
	while (alph <= 'z')
	{
		putchar('-');
		pr_uint(alph);
		alph++
	}
		putchar("\n");
	return (0);
}
